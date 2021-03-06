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
#ifndef LFC_H
#define LFC_H

// Libraries needed to compile
// rt, libsqlite3, libx11, libcairo, libpango-1.0, libpangocairo-1.0

// Linker options for backtrace at exceptions
// -rdynamic

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "n_object.h"
#include "exception.h"
#include "nobjectregistry.h"
#include "nchar.h"
#include "nshort.h"
#include "nint.h"
#include "nbool.h"
#include "nlong.h"
#include "nlonglong.h"
#include "nuchar.h"
#include "nushort.h"
#include "nuint.h"
#include "nulong.h"
#include "nulonglong.h"
#include "nfloat.h"
#include "ndouble.h"
#include "nlongdouble.h"
#include "nwchar.h"
#include "random.h"
#include "Delegations/ndelegation.h"
#include "Delegations/ndelegationmanager.h"
#include "Text/text.h"
#include "Text/text_buffer.h"
#include "Text/text_exception.h"
#include "Encoding/locale_encoding.h"
#include "Collections/collection.h"
#include "Collections/collection_exception.h"
#include "Collections/dictionary.h"
#include "Collections/nobjectcollection.h"
#include "Collections/nobjectdictionary.h"
#include "FileSystem/directory.h"
#include "FileSystem/filesystemexception.h"
#include "FileSystem/filesystemobjectinfo.h"
#include "FileSystem/file.h"
#include "FileSystem/ifile.h"
#include "FileSystem/serializator.h"
#include "FileSystem/buffer.h"
#include "Time/datetime.h"
#include "Time/timeexception.h"
#include "Devices/stdout.h"
#include "Devices/stdin.h"
#include "Devices/stderr.h"
#include "Devices/serialport.h"
#include "Devices/deviceexception.h"
#include "System/system.h"
#include "System/systemexception.h"
#include "System/groupinfo.h"
#include "System/userinfo.h"
#include "Math/math.h"
#include "Math/mathexception.h"
#include "Threading/thread.h"
#include "Threading/mutex.h"
#include "Threading/waitcondition.h"
#include "Threading/threadingexception.h"
#include "Threading/mutexlock.h"
#include "Network/ipv4socketaddress.h"
#include "Network/isocketaddress.h"
#include "Network/networkexception.h"
#include "Network/socket.h"
#include "Network/ipv4genericserver.h"
#include "Network/ipv4genericservercontroller.h"
#include "Data/dataexception.h"
#include "Data/sqlite3db.h"
#include "Data/sqlite3statement.h"
#include "Data/sqlite3recordset.h"
#include "XWidgets/xwindow.h"
#include "XWidgets/xdisplay.h"
#include "XWidgets/keysymbols.h"
#include "XWidgets/keycompositionsymbol.h"
#include "XWidgets/xexception.h"
#include "XWidgets/Graphics/igraphics.h"
#include "XWidgets/Graphics/xwindowgraphics.h"
#include "XWidgets/Graphics/pixmapgraphics.h"
#include "XWidgets/Graphics/imagegraphics.h"
#include "XWidgets/Graphics/nsize.h"
#include "XWidgets/Graphics/npoint.h"
#include "XWidgets/Graphics/nrectangle.h"
#include "XWidgets/Graphics/ncolor.h"
#include "XWidgets/Graphics/nfont.h"
#include "XWidgets/Graphics/graphicspattern.h"
#include "XWidgets/Graphics/graphicspatternlinear.h"
#include "XWidgets/Graphics/graphicspatternradial.h"
#include "XWidgets/Events/windoweventmousebutton.h"
#include "XWidgets/Events/windoweventmousemove.h"
#include "XWidgets/Events/windoweventcreate.h"
#include "XWidgets/Events/windoweventdestroy.h"
#include "XWidgets/Events/windowevententerleave.h"
#include "XWidgets/Events/windoweventkey.h"
#include "XWidgets/Events/windoweventfocus.h"
#include "XWidgets/Events/windoweventkeymap.h"
#include "XWidgets/Events/windoweventdraw.h"
#include "XWidgets/Events/windoweventvisible.h"
#include "XWidgets/Events/windoweventshow.h"
#include "XWidgets/Events/windoweventmove.h"
#include "XWidgets/Events/windoweventresize.h"
#include "XWidgets/Events/windoweventkeyboardmapping.h"
#include "XWidgets/Events/windoweventcolormap.h"
#include "XWidgets/Events/controlevent.h"
#include "XWidgets/Events/controleventvisible.h"
#include "XWidgets/Events/controleventfocused.h"
#include "XWidgets/Events/controleventbackcolor.h"
#include "XWidgets/Events/controleventfont.h"
#include "XWidgets/Events/controleventmoved.h"
#include "XWidgets/Events/controleventkey.h"
#include "XWidgets/Events/controleventmouseclick.h"
#include "XWidgets/Events/controleventmousedoubleclick.h"
#include "XWidgets/Events/controleventaction.h"
#include "XWidgets/Events/controleventfocusedcolor.h"
#include "XWidgets/Controls/control.h"
#include "XWidgets/Controls/controllabel.h"
#include "XWidgets/Controls/controlbutton.h"
#include "XWidgets/Controls/controltextbox.h"
#include "XWidgets/Controls/controlexception.h"

void lfc_init();

#endif