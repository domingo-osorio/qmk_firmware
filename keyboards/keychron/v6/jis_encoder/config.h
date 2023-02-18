/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix pins */
#define MATRIX_ROW_PINS \
    { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS \
    { A10, A9, A8, B1, B0, A7, A6, A5, A4, A3, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 61
#define DRIVER_2_LED_TOTAL 51
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Limit the maximum brigtness current of colour white to 500mA */
#define CKLED2001_CURRENT_TUNE \
    { 0x9d, 0x9d, 0x4d, 0x9d, 0x9d, 0x4d, 0x9d, 0x9d, 0x4d, 0x9d, 0x9d, 0x4d }

/* Encoder Configuration */
#define ENCODERS_PAD_A \
    { C14 }
#define ENCODERS_PAD_B \
    { A2 }
#define ENCODER_DEFAULT_POS 0x3

/* Enable caps-lock LED*/
#define CAPS_LOCK_LED_INDEX 62

/* Enable NUM_LOCK_LED_INDEX */
#define NUM_LOCK_LED_INDEX 38
