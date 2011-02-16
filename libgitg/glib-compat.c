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

#include "glib-compat.h"

#if !GLIB_CHECK_VERSION (2, 26, 0)

GType
g_error_get_type (void)
{
        static GType type = G_TYPE_INVALID;

        if (type == G_TYPE_INVALID)
        {
                type = g_boxed_type_register_static ("GError",
                                (GBoxedCopyFunc) g_error_copy,
                                (GBoxedFreeFunc) g_error_free);
        }

        return type;
}

#endif /* GLIB < 2.26.0 */

/* ex:ts=8:noet: */
