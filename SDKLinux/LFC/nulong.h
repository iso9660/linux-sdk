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
#ifndef NULONG_H
#define NULONG_H

#include "n_object.h"

class Text;

class NULong : public NObject {

public:
	NULong();
	NULong(unsigned long n);
	NULong(const NULong &n);
	virtual ~NULong();
	
	virtual NULong &operator =(const NULong &n);

	static unsigned long MaxValue();
	static unsigned long MinValue();
	static unsigned long Parse(const Text &text);
	static bool TryParse(const Text &text, unsigned long &n);
	Text ToText(const Text &format);
	
	unsigned long &Value();
	
	virtual NObject *NewInstance();
	virtual Text ToText();
	virtual int Compare(const NObject &o);
	virtual int Compare(const NULong &l);
	virtual bool Equals(const NObject &o);
	virtual void Serialize(const Serializator &s);
	virtual void Deserialize(const Serializator &s);
	
	static int COMPARER(const void *u, const void *v);

protected:
	unsigned long value;
	
};

#endif // NULONG_H
