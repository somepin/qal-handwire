/* Copyright 2021 somepin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x6969
#define DEVICE_VER      0x0001
#define MANUFACTURER    somepin
#define PRODUCT         qal

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define DIODE_DIRECTION COL2ROW

// #define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, A7, A8, A10, B7 }
#define MATRIX_COL_PINS { B7, A10, A8, A7, A6, A5, A4, A3, A2, A1 }
#define MATRIX_ROW_PINS { B6, B5, B4, B3 }
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define TAPPING_TERM 200

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
