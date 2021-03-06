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
#include "nuint.h"
#include "exception.h"
#include "Text/text.h"
#include "FileSystem/serializator.h"
#include <stdio.h>
#include <limits.h>
#include <typeinfo>
#include <errno.h>

NUInt::NUInt()
{
	value = 0;
}

NUInt::NUInt(unsigned int n)
{
	value = n;
}

NUInt::NUInt(const NUInt &n)
{
	value = n.value;
}

NUInt::~NUInt()
{
}

unsigned int NUInt::MaxValue()
{
	return UINT_MAX;
}

NUInt &NUInt::operator =(const NUInt &n)
{
	value = n.value;
	return *this;
}

unsigned int NUInt::MinValue()
{
	return 0;
}

unsigned int NUInt::Parse(const Text &text)
{
	unsigned int n = 0;
	if (!TryParse(text, n))
		throw new Exception("Number out of limits", __FILE__, __LINE__, __func__);
	return n;
}

bool NUInt::TryParse(const Text &text, unsigned int &n)
{
	char tt[1001];
	((Text *)&text)->GetAnsiString(tt, 1000);
	
	errno = 0;
	long long ll = atoll(tt);
	if (errno != 0) return false;
	if (ll > MaxValue() || ll < MinValue()) return false;
	n = ll;
	return true;
}

Text NUInt::ToText(const Text &format)
{
	char ff[1001];
	((Text *)&format)->GetAnsiString(ff, 1000);
	
	char tt[1001];
	sprintf(tt, ff, value);
	return (Text)tt;
}

unsigned int &NUInt::Value()
{
	return value;
}

NObject *NUInt::NewInstance()
{
	return new NUInt();
}

Text NUInt::ToText()
{
	char cadena[1001];
	sprintf(cadena, "%u", value);
	return (Text)cadena;
}

int NUInt::Compare(const NObject &o)
{
	if (typeid(*this) != typeid(o)) 
		throw new Exception("Not comparable", __FILE__, __LINE__, __func__);
	return Compare((NUInt &)o);
}

int NUInt::Compare(const NUInt &i)
{
	if (value > i.value) return 1;
	else if (value < i.value) return -1;
	else return 0;
}

bool NUInt::Equals(const NObject &o)
{
	if (this == &o) return true;
	if (typeid(*this) != typeid(o)) return false;
	return Value() == ((NUInt &)o).Value();
}

void NUInt::Serialize(const Serializator &s)
{
	((Serializator *)&s)->Put(value);
}

void NUInt::Deserialize(const Serializator &s)
{
	value = ((Serializator *)&s)->GetUInt();
}

int NUInt::COMPARER(const void *u, const void *v) 
{
	unsigned int *uu = (unsigned int *)u;
	unsigned int *vv = (unsigned int *)v;
	
	if (*uu > *vv) return 1;
	else if (*uu < *vv) return -1;
	else return 0;
}