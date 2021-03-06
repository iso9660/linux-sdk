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
#include "thread.h"
#include "threadingexception.h"
#include "../Text/text.h"
#include <unistd.h>
#include <errno.h>

Thread::Thread()
{
	thread = 0;
	name = new Text();
}

Thread::Thread(const Text &name)
{
	thread = 0;
	this->name = new Text(name);
}

Thread::Thread(const Text &name, bool joinable)
{
	thread = 0;
	this->name = new Text(name);
	this->joinable = joinable;
}

Thread::~Thread()
{
	delete name;
}

void Thread::Launch(NObject *nobject, Delegate method, void *param)
{
	NDelegation d(nobject, method);
	Launch(d, param);
}

void Thread::Launch(const NDelegation &delegation, void *params)
{
	if (thread != 0)
		throw new ThreadingException("A thread can only be launched once", __FILE__, __LINE__, __func__);
		
	pthread_attr_t attrs;
	pthread_attr_init(&attrs);
	pthread_attr_setdetachstate(&attrs, joinable ? PTHREAD_CREATE_JOINABLE : PTHREAD_CREATE_DETACHED);
	void **threadParams = new void *[2];
	threadParams[0] = new NDelegation(delegation);
	threadParams[1] = params;
	int i = pthread_create(&thread, NULL, threadFunction, threadParams);
	pthread_attr_destroy(&attrs);
	
	if (i == EAGAIN) throw new ThreadingException("Insuficient resources to create another thread", __FILE__, __LINE__, __func__);
	else if (i == EINVAL) throw new ThreadingException("Invalid attributes", __FILE__, __LINE__, __func__);
	else if (i == EPERM) throw new ThreadingException("No permission to set attributes and scheduling policy", __FILE__, __LINE__, __func__);
	
	char strname[10001];
	name->GetAnsiString(strname, 10000);
	pthread_setname_np(thread, strname);
}

void *Thread::Join()
{
	void *results = NULL;
	int i = pthread_join(thread, &results);
	
	if (i == 0) return results;
	else if (i == EDEADLK) throw new ThreadingException("A deadlock was detected.", __FILE__, __LINE__, __func__);
	else if (i == EINVAL) throw new ThreadingException("Thread is not joinable or another thread is waitingo to join", __FILE__, __LINE__, __func__);
	else if (i == ESRCH) throw new ThreadingException("Specified thread not found", __FILE__, __LINE__, __func__);
	else throw new ThreadingException("Unspecified error", __FILE__, __LINE__, __func__);
}

void Thread::Sleep(unsigned long microseconds)
{
	usleep(microseconds);
}

void *Thread::threadFunction(void *params)
{
	// Read parameters
	void **vparams = (void **)params;
	NDelegation *d = (NDelegation *)vparams[0];
	void *delegateParams = vparams[1];
	delete vparams;
	
	// Execute delegate
	void *results = NULL;
	try {
		results = d->Execute(delegateParams);
	} catch (Exception *e) {
		delete e;
	}
	
	// Delete and return 
	delete d;
	return results;
}

Text Thread::ToText()
{
	return *name;
}