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
#include "keycompositionpath.h"
#include "../Text/text.h"

KeyCompositionPath::KeyCompositionPath(const Text &composition, const Text &result, bool continueComposing)
{
	this->composition = new Text(composition);
	this->result = new Text(result);
	this->continueComposing = continueComposing;
}

KeyCompositionPath::~KeyCompositionPath()
{
	delete composition;
	delete result;
}

Text &KeyCompositionPath::Composition()
{
	return *composition;
}

Text &KeyCompositionPath::Result()
{
	return *result;
}

