;=========================================================================
; messages.inc - Messages printed by BIOS POST (Power On Self Test)
;-------------------------------------------------------------------------
;
; Compiles with NASM 2.07, might work with other versions
;
; Copyright (C) 2011 - 2014 Sergey Kiselev.
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

msg_copyright	db	0Dh, 0Ah
		db	"Xi 8088 BIOS, Version "
		db	VERSION
		db	". "
		db	"Copyright (C) 2010 - 2014 Sergey Kiselev", 0Dh, 0Ah
		db	"Distributed under the terms of "
		db	"the GNU General Public License", 0Dh, 0Ah
msg_crlf	db      0Dh, 0Ah, 00h
msg_none	db	'none', 00h
msg_colon	db	': ', 00h
msg_semicolon	db	'; ', 00h
msg_cpu		db      'Main Processor:             ', 00h
msg_fpu		db      'Mathematics Co-processor:   ', 00h
msg_cpu_8088_78	db      "Intel 8088 '78", 0Dh, 0Ah
		db      'WARNING: This CPU does not disable interrupts '
		db      'after loading segment registers!', 0Dh, 0Ah, 00h
msg_cpu_8088_81	db      "Intel 8088 '81 or later, "
		db      'or OKI-designed 80C88', 0Dh, 0Ah, 00h
msg_cpu_harris  db      'Harris-designed 80C88', 0Dh, 0Ah, 00h
msg_cpu_nec_v20 db      'NEC V20', 0Dh, 0Ah, 00h
msg_fpu_present db      'Intel 8087', 0Dh, 0Ah, 00h
msg_disp	db      'Display Adapter Type:       ', 00h
msg_disp_ega	db      'EGA/VGA (Video BIOS Present)', 0Dh, 0Ah, 00h
msg_disp_cga	db      'CGA', 0Dh, 0Ah, 00h
msg_disp_mda	db      'MDA or Hercules', 0Dh, 0Ah, 00h
msg_rtc		db	'RTC (Real Time Clock) time: ', 00h
msg_floppy	db	'Floppy disk drives:         Drive 0: ', 00h
msg_floppy_2	db	'; Drive 1: ', 00h
msg_floppy_360	db	'360 KB, 5.25"', 00h
msg_floppy_1200	db	'1.2 MB, 5.25"', 00h
msg_floppy_720	db	'720 KB, 3.5"', 00h
msg_floppy_1440	db	'1.44 MB, 3.5"', 00h
msg_floppy_2880	db	'2.88 MB, 3.5"', 00h
msg_mouse	db      'PS/2 Aux Device (Mouse):    ', 00h
msg_present	db      'Present', 0Dh, 0Ah, 00h
msg_absent	db      'Absent', 0Dh, 0Ah, 00h
msg_serial	db	'Serial Ports:               ', 00h
msg_serial_com	db	'COM', 00h
msg_parallel	db	'Parallel Ports:             ', 00h
msg_parallel_lpt db	'LPT', 00h
msg_ram_testing	db	'Testing RAM (ESC to skip):  ', 00h
msg_ram_error	db	0Dh, 0Ah, 'ERROR: Faulty memory detected at ', 00h
msg_ram_total	db      0Dh, 'Total Conventional RAM:     ', 00h
msg_ebda	db      'Reserved for EBDA:          ', 00h
msg_ram_avail	db      'Available Conventional RAM: ', 00h
msg_kib		db      ' KiB', 0Dh, 0Ah, 00h
msg_boot_failed	db      'Boot failed, press any key to try again...', 0Dh, 0Ah, 0
msg_no_basic    db      'No ROM BASIC', 0Dh, 0Ah, 0
msg_rom_found   db      'Found BIOS extension ROM at ', 0
msg_rom_init	db	'0, initializing...', 0Dh, 0Ah, 0
msg_boot	db      'Booting OS...', 0Dh, 0Ah, 0
msg_rtc_bad	db	'ERROR: RTC battery is bad', 0Dh, 0Ah, 00h
msg_rtc_sum	db	'ERROR: NVRAM checksum is invalid, '
		db	'loading default values to NVRAM', 0Dh, 0Ah, 00h
msg_setup	db	'Press F1 to run NVRAM setup...',0Dh, 0Ah, 0Dh, 0Ah, 00h
msg_set_welcome	db	0Dh, 0Ah, 'Welcome to the NVRAM setup utility', 00h
msg_set_help	db	0Dh, 0Ah
		db	'NVRAM setup commands:', 0Dh, 0Ah
		db	't - Set time', 0Dh, 0Ah
		db	'd - Set date', 0Dh, 0Ah
		db	'f - Change first floppy drive type', 0Dh, 0Ah
		db	'g - Change second floppy drive type', 0Dh, 0Ah
		db	'p - Print current settings', 0Dh, 0Ah
		db	'w - Save changes and exit', 0Dh, 0Ah
		db	'q - Exit without saving changes', 0Dh, 0Ah
		db	'h - Show this help', 0Dh, 0Ah, 00h
msg_set_prompt	db	0Dh, 0Ah, 'Enter command (h for help): ', 00h
msg_set_time	db	'Enter time (hh:mm:ss): ', 00h
msg_set_date	db	'Enter date (YYYY-MM-DD): ', 00h
msg_time_inval	db	'ERROR: Invalid time.', 0Dh, 0Ah, 00h
msg_date_inval	db	'ERROR: Invalid date.', 0Dh, 0Ah, 00h
msg_set_fd_help	db	0Dh, 0Ah
		db	'Floppy drive types:', 0Dh, 0Ah
		db	'0 - Not installed   3 - 720 KB, 3.5"', 0Dh, 0Ah
		db	'1 - 360 KB, 5.25"   4 - 1.44 MB, 3.5"', 0Dh, 0Ah
		db	'2 - 1.2 MB, 5.25"   6 - 2.88 MB, 3.5"', 0Dh, 0Ah
		db	'Setup commands:', 0Dh, 0Ah
		db	'r - Return to the main menu', 0Dh, 0Ah
		db	'h - Show this help', 0Dh, 0Ah, 00h
msg_set_fd_prmt	db	0Dh, 0Ah, 'Enter floppy drive type (h for help): '
		db	00h
tbl_floppy	dw	msg_none
		dw	msg_floppy_360
		dw	msg_floppy_1200
		dw	msg_floppy_720
		dw	msg_floppy_1440
		dw	msg_none
		dw	msg_floppy_2880
		dw	msg_none
