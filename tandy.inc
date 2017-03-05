; Tandy.inc - Tandy byte id
;
; Compiles with NASM 2.07, might work with other versions
;
; Copyright (C) 2011 - 2012 Sergey Kiselev.
; Provided for hobbyist use on the Xi 8088 board.
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
;=========================================================================

%ifdef TANDY_ID
	setloc	0xC000
	db '!BIOS ROM version 01.03.00',0x0D, 0x0A, 0x00
	db 'Compatibility Software',0x0D, 0x0A, 0x00
	db 'Copyright (C) 1984,1985,1986,1987',0x0D, 0x0A, 0x00
	db 'Phoenix Software Associates Ltd.',0x0D, 0x0A, 0x00
	db 'and Tandy Corporation.',0x0D, 0x0A, 0x00
	db 'All rights reserved.',0x0D, 0x0A, 0x00
	db '$'
%endif

