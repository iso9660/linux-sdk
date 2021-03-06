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
#ifndef IPV4SOCKETADDRESS_H
#define IPV4SOCKETADDRESS_H

#include "isocketaddress.h"

class Text;

class IPV4SocketAddress : public ISocketAddress 
{
	Text *hostname;
	int port;
	
	
public:
	static const int PortAny = 0;
	
	IPV4SocketAddress();
	IPV4SocketAddress(const IPV4SocketAddress &addr);
	IPV4SocketAddress(struct sockaddr_in *saddr);
	IPV4SocketAddress(const Text &hostname, int port);
	virtual ~IPV4SocketAddress();
	
	Text Hostname();
	int Port();
	
	IPV4SocketAddress &operator=(const IPV4SocketAddress &address);
	
	virtual Text ToText();

	static IPV4SocketAddress AnyLocal();
	virtual struct sockaddr *GetAddressData();
	virtual socklen_t GetAddressLen();
};

#endif // IPV4SOCKETADDRESS_H
