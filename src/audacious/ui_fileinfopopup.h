/*
 * Audacious: A cross-platform multimedia player
 * Copyright (c) 2006 William Pitcock, Tony Vroon, George Averill,
 *                    Giacomo Lozito, Derek Pomery and Yoshiki Yazawa.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _UI_FILEINFOPOPUP_H_
#define _UI_FILEINFOPOPUP_H_

#include "audacious/titlestring.h"
#include <gtk/gtk.h>

/* create/destroy */
GtkWidget* audacious_fileinfopopup_create(void);
void audacious_fileinfopopup_destroy(GtkWidget* fileinfopopup_win);

/* show/hide */
void audacious_fileinfopopup_show_from_tuple(GtkWidget *fileinfopopup_win, TitleInput *tuple);
void audacious_fileinfopopup_show_from_title(GtkWidget *fileinfopopup_win, gchar *title);
void audacious_fileinfopopup_hide(GtkWidget *filepopup_win, gpointer unused);

#endif