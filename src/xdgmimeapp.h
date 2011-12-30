/* xdgmimeapp.h: Public file.  Datastructure for storing
 * the .desktop and .list files.
 *
 * More info can be found at http://www.freedesktop.org/standards/
 *
 * Copyright (C) 2011  Dmitriy Vilkov <dav.daemon@gmail.com>
 *
 * Licensed under the Academic Free License version 2.0
 * Or under the following terms:
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __XDG_MIME_APP_H_
#define __XDG_MIME_APP_H_


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct XdgApp      XdgApp;
typedef struct XdgAppArray XdgAppArray;


const XdgAppArray *xdg_mime_default_apps_lookup(const char *mimeType);
const XdgAppArray *xdg_mime_user_apps_lookup(const char *mimeType);
const XdgAppArray *xdg_mime_known_apps_lookup(const char *mimeType);

int xdg_app_array_size(const XdgAppArray *array);
const XdgApp *xdg_app_array_item_at(const XdgAppArray *array, int index);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __XDG_MIME_APP_H_ */
