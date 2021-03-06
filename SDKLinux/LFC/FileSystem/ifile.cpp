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
#include "ifile.h"
#include "../Text/text.h"
#include "../System/system.h"
#include "../exception.h"
#include "buffer.h"
#include <unistd.h>
#include <string.h>
#include <errno.h>

IFile::IFile()
{
}

IFile::~IFile()
{
}

int IFile::Read(char *buffer, int lonBuffer)
{
	if (fd == -1)
		throw new Exception("Cannot read from a closed device or file", __FILE__, __LINE__, __func__);
	size_t leido = read(fd, buffer, lonBuffer);
	if (leido == -1 && (errno == EAGAIN || errno == EWOULDBLOCK)) return 0;
	if (leido == -1)
		throw new Exception(Text::FromErrno(), __FILE__, __LINE__, __func__);
	return leido;
}

void IFile::Read(char *buffer, int lonBuffer, long nanoseconds_timeout)
{
	unsigned long ticks = System::GetNanoTicks();
	int leido = 0;
	while (leido < lonBuffer) {
		leido += Read(buffer + leido, lonBuffer - leido);
		if (leido < lonBuffer) {
			unsigned long elapsed = System::GetNanoTicks() - ticks;
			if (elapsed > nanoseconds_timeout) break;
			if (!WaitForDataComming(nanoseconds_timeout - elapsed))
				throw new Exception("Read timeout expired", __FILE__, __LINE__, __func__);
		}
	}
}

int IFile::Write(const char *buffer, int lonBuffer)
{
	if (fd == -1)
		throw new Exception("Cannot write in a closed device or file", __FILE__, __LINE__, __func__);
	size_t escrito = 0;
	while (escrito < lonBuffer) {
		int quedan = lonBuffer - escrito;
		size_t res = write(fd, buffer + escrito, quedan > 1000 ? 1000 : quedan);
		if (res == -1) throw new Exception(Text::FromErrno(), __FILE__, __LINE__, __func__);
		escrito += res;
	}
	return escrito;
}

bool IFile::WaitForDataComming(long nanoseconds_timeout)
{
	if (fd == -1)
		throw new Exception("Can only perform actions on an open device", __FILE__, __LINE__, __func__);
		
	struct timeval timeout;
	timeout.tv_sec = nanoseconds_timeout / 1000000000;
	timeout.tv_usec = nanoseconds_timeout % 1000000000;
	
	fd_set readSet;
	FD_ZERO(&readSet);
	FD_SET(fd, &readSet);
	
	if (select(fd + 1, &readSet, NULL, NULL, nanoseconds_timeout < 0 ? NULL : &timeout) == -1)
		throw new Exception(Text::FromErrno(), __FILE__, __LINE__, __func__);
	bool thereIsData = FD_ISSET(fd, &readSet);	
	
	FD_CLR(fd, &readSet);
	return thereIsData;
}

bool IFile::WaitForDataGoing(long nanoseconds_timeout)
{
	if (fd == -1)
		throw new Exception("Can only perform actions on an open device", __FILE__, __LINE__, __func__);
		
	struct timeval timeout;
	timeout.tv_sec = nanoseconds_timeout / 1000000000;
	timeout.tv_usec = nanoseconds_timeout % 1000000000;
	
	fd_set writeSet;
	FD_ZERO(&writeSet);
	FD_SET(fd, &writeSet);
	
	if (select(fd + 1, NULL, &writeSet, NULL, nanoseconds_timeout < 0 ? NULL : &timeout) == -1)
		throw new Exception(Text::FromErrno(), __FILE__, __LINE__, __func__);
	bool canWrite = FD_ISSET(fd, &writeSet);	
	
	FD_CLR(fd, &writeSet);
	return canWrite;	
}

Text IFile::ReadLine()
{
	Buffer b;
	char c;
	
	while (true) {
		Read(&c, 1, -1);
		if (c == '\n') break;
		b.Write(&c, 1);
	}
	
	return b.ToText();
}

Text IFile::ReadLine(long nanoseconds_timeout) 
{
	Buffer b;
	char c;
	
	while (true) {
		Read(&c, 1, nanoseconds_timeout);
		if (c == '\n') break;
		b.Write(&c, 1);
	}
	
	return b.ToText();
}

void IFile::Write(const Text &text)
{
	Text *tt = (Text *)&text;
	int lont = 2 * tt->Length() + 2;
	char *t = new char[lont];
	
	try {
		tt->GetAnsiString(t, lont);
		int reallont = strlen(t);
		Write(t, reallont);
	} catch (Exception *e) {
		delete t;
		throw e;
	} catch (...) {
		delete t;
	}
}

void IFile::WriteLine(const Text &text)
{
	Write(text);
	WriteLine();
}

void IFile::WriteLine()
{
	 const char *t = "\n";
	 Write(t, 1);
}