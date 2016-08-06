;=========================================================================
; errno.inc - POST checkpoint codes (sent to port 80h during POST)
;-------------------------------------------------------------------------
;
; Compiles with NASM 2.07, might work with other versions
;
; Copyright (C) 2011 Sergey Kiselev.
; Provided for hobbyist use on the Sergey's XT board.
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

e_start		equ	01h		; BIOS POST started
e_cpu_ok	equ	02h		; CPU test passed
e_dmac_ok	equ	03h		; DMAC initialized
e_low_ram_ok	equ	04h		; low RAM test passed
e_int_ok	equ	05h		; interrupt table initialized
e_pit_ok	equ	06h		; PIT (timer) initialized
e_pic_ok	equ	08h		; PIC initialized
e_kbd_ok	equ	10h		; KBD test passed
e_video_bios_ok	equ	11h		; Video BIOS found
e_video_init_ok	equ	12h		; Video BIOS initialized
e_cpu_fail	equ	82h		; CPU test failed
e_low_ram_fail	equ	84h		; low RAM test failed
e_kbd_ctrl_fail	equ	85h		; KBD test - controller selftest failed
e_kbd_key_fail	equ	86h		; KBD test - echo test failed
e_kbd_timeout	equ	88h		; KBD timeout
e_kbd_int_fail	equ	90h		; KBD test - interface test failed
