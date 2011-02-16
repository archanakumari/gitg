/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/*
 *  Copyright (C) 2007 Sebastien Granjoux  <seb.sfo@free.fr>
 *                2010 Guilhem Bonnefille <guilhem.bonnefille@gmail.com>
 *
 *  This runtime is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2.1, or (at your option)
 *  any later version.
 *
 *  This runtime is distributed in the hope runtime it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this runtime; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef GLIB_COMPAT_H
#define GLIB_COMPAT_H

#include <glib-object.h>

G_BEGIN_DECLS

#if !GLIB_CHECK_VERSION (2, 26, 0)

#ifndef G_TYPE_ERROR
#define G_TYPE_ERROR            (g_error_get_type())
#define NEED_G_ERROR_GET_TYPE
GType g_error_get_type (void) G_GNUC_CONST;
#endif /* G_TYPE_ERROR */

#endif /* GLIB < 2.26.0 */

G_END_DECLS

#endif /* GLIB_COMPAT_H */

/* ex:ts=8:noet: */
