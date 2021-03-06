/* 
* LFC Library - Linux toolkit
* 
* Copyright (C) 2012, 2013 Daniel Mosquera Villanueva 
* (milkatoffeecuco@gmail.com)
* This file is part of LFC Library.
* 
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library. If not, see <http://www.gnu.org/licenses/>.
*
**/
#include "ipv4genericserver.h"
#include "ipv4socketaddress.h"
#include "../Threading/thread.h"
#include "../Threading/mutexlock.h"
#include "../Text/text.h"

IPV4GenericServer::IPV4GenericServer(int port)
{
	mutex = new Mutex();
	clientSockets = new Collection<Socket *>();
	socket = new Socket(Socket::SockDomainInetV4, Socket::SockTypeStream, Socket::SockProtocolNone);
	socket->Bind(IPV4SocketAddress("127.0.0.1", port));
	socket->Listen(5);
	
	// Initialize delegations
	delegationOnManageClientConnection = NULL;
	delegationOnManageClientSocket = NULL;
	
	// Launch server thread
	Thread *t = new Thread((Text)"Server thread", false);
	t->Launch(this, (Delegate)&IPV4GenericServer::serverAcceptFunction, t);
}

IPV4GenericServer::~IPV4GenericServer()
{
	// Server socket is closed to not accept more connections
	socket->Close();
	delete socket;
	
	// Kill all clients and wait for them to stop
	mutex->Lock();
	for (int i=0; i<clientSockets->Count(); i++) (*clientSockets)[i]->Close();
	mutex->Unlock();
	while (clientSockets->Count() != 0) Thread::Sleep(20000);
	
	delete clientSockets;
	delete mutex;
	delete delegationOnManageClientConnection;
	delete delegationOnManageClientSocket;
}

void IPV4GenericServer::OnManageClientConnection(NObject *object, Delegate delegate)
{
	MutexLock L(mutex);
	if (delegationOnManageClientConnection != NULL) delete delegationOnManageClientConnection;
	delegationOnManageClientConnection = new NDelegation(object, delegate);
}

void IPV4GenericServer::OnManageClientSocket(NObject *object, Delegate delegate)
{
	MutexLock L(mutex);
	if (delegationOnManageClientSocket != NULL) delete delegationOnManageClientSocket;
	delegationOnManageClientSocket = new NDelegation(object, delegate);
}

void *IPV4GenericServer::serverAcceptFunction(void *params)
{
	Thread *serverThread = (Thread *)params;
	IPV4SocketAddress address;
	
	while (true) {
		// Accept a new connection
		try {
			Socket *clientSocket = socket->Accept(address);
			
			try {
				// Manage the new connection (manage new client connection is optional)
				if (delegationOnManageClientConnection != NULL) {		
					if (delegationOnManageClientConnection->Execute(&address) == NULL) {
						delete clientSocket;
						continue;
					}
				}
				
				// Management of the client socket is mandatory
				if (delegationOnManageClientSocket == NULL) {
					delete clientSocket;
					continue;
				}
				
				// Add socket to clientSockets list
				mutex->Lock();
				clientSockets->Add(clientSocket);
				mutex->Unlock();

				// Create a new thread to manage the client connection
				Thread *clientThread = new Thread((Text)"Client " + address.ToText() + " thread", false);
				void **clientParams = new void *[3];
				clientParams[0] = clientThread;
				clientParams[1] = clientSocket;
				clientParams[2] = new NDelegation(*delegationOnManageClientSocket);
				clientThread->Launch(this, (Delegate)&IPV4GenericServer::clientFunction, clientParams);
			} catch (Exception *e) {
				delete e;
			}
		} catch (Exception *e) {
			delete e;
			break;
		}
	}
	
	// Suicidal behavior
	delete serverThread;
}

void *IPV4GenericServer::clientFunction(void *params)
{
	void **vparams = (void **) params;
	Thread *clientThread = (Thread *)vparams[0];
	Socket *clientSocket = (Socket *)vparams[1];
	NDelegation *clientDelegation = (NDelegation *)vparams[2];
	delete vparams;
	
	// Execute the client delegate passing the address to it
	void *results = NULL;
	try {
		results = clientDelegation->Execute(clientSocket);
	} catch (Exception *e) {
		delete e;
	}
	
	// Remove clientSocket from clientSockets list
	mutex->Lock();
	clientSockets->Remove(clientSocket);
	mutex->Unlock();
	
	// Removing resources
	delete clientDelegation;
	delete clientSocket;
	delete clientThread;
	return results;
}
