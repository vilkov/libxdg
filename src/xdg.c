/** @internal @file xdg.c
 *  @brief Private file.
 *
 * More info can be found at http://www.freedesktop.org/standards/
 *
 * @copyright
 * Copyright (C) 2011,2012  Dmitriy Vilkov <dav.daemon@gmail.com>
 * @n@n
 * Licensed under the Academic Free License version 2.0
 * Or under the following terms:
 * @n@n
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * @n@n
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 * @n@n
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include "xdg.h"
#include "xdgmime_p.h"
#include "xdgapp_p.h"
#include "xdgtheme_p.h"


void xdg_init()
{
	_xdg_mime_init();
	_xdg_app_init();
	_xdg_themes_init();
}

void xdg_shutdown()
{
	_xdg_themes_shutdown();
	_xdg_app_shutdown();
	_xdg_mime_shutdown();
}
