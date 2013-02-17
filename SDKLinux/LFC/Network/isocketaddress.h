/* Copyright (C) 2012, 2013
   Daniel Mosquera Villanueva (daniel.m.v@terra.es)
   This file is part of LFC Library.

   LFC Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   LFC Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with LFC Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA. or see http://www.gnu.org/licenses/. */
   
   
#ifndef ISOCKETADDRESS_H
#define ISOCKETADDRESS_H

#include "../n_object.h"
#include <sys/types.h>
#include <sys/socket.h>

class ISocketAddress : public NObject {

public:
	ISocketAddress();
	virtual ~ISocketAddress();
	
	virtual struct sockaddr *GetAddressData() = 0;
	virtual socklen_t GetAddressLen() = 0; 

};

#endif // ISOCKETADDRESS_H