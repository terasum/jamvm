/*
 * Copyright (C) 2020
 * Quan Chen <chenquan@chainlark.com>.
 *
 * This file is part of JamVM.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/*
- The OS X result is reproducible on hardware that does not support the (non-standard) 80-bit floating point type. The Linux result is not.
- Both the OS X result and the Linux result conform to IEEE-754 and to the C standard. There is no "problem" with either one of them.
https://stackoverflow.com/questions/7681166/how-to-use-floating-point-extended-precision-in-a-macos-or-windows-system

So on Darwin/x86_64 you do not need set it
*/
void setDoublePrecision() {
}

void initialisePlatform() {
}
