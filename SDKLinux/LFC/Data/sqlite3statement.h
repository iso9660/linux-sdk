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
#ifndef SQLITE3STATEMENT_H
#define SQLITE3STATEMENT_H

#include "../n_object.h"
#include <sqlite3.h>

class SQLite3DB;
class Text;
class SQLite3Recordset;
class Buffer;

class SQLite3Statement : public NObject {
	sqlite3 *db;
	sqlite3_stmt *stmt;
	Text *query;
	
public:
	SQLite3Statement(const SQLite3DB &database, const Text &query);
	virtual ~SQLite3Statement();
	
	void BindNull(int parameter);
	void BindInteger(int parameter, int value);
	void BindLong(int parameter, long value);
	void BindDouble(int parameter, double value);
	void BindText(int parameter, const Text &t);
	void BindBlob(int parameter, const Buffer &b);
	
	int GetParameterIndex(const Text &parameter);

	void BindNull(const Text &parameter);
	void BindInteger(const Text &parameter, int value);
	void BindLong(const Text &parameter, long value);
	void BindDouble(const Text &parameter, double value);
	void BindText(const Text &parameter, const Text &t);
	void BindBlob(const Text &parameter, const Buffer &b);

	void Exec();
	SQLite3Recordset ExecQuery();

};

#endif // SQLITE3STATEMENT_H
