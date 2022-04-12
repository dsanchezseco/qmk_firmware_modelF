/* Copyright 2020 Purdea Andrei
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
#include QMK_KEYBOARD_H

#define ESC_CTL LCTL_T(KC_ESC)
#define ENT_CTL RCTL_T(KC_ENT)

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_ansi_regular_shift_regular_backspace(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_P7,   KC_P8,   KC_P9,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_P4,   KC_P5,   KC_P6,
        ESC_CTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, ENT_CTL,                   KC_P1,   KC_P2,   KC_P3,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                            KC_P0,   KC_UP,   KC_PDOT,
        MO(_FN), KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, KC_RGUI, MO(_FN),                            KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN] = LAYOUT_ansi_regular_shift_regular_backspace(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, KC_VOLD, KC_VOLU, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                            KC_NLCK, KC_PGUP, _______,
        _______, _______, _______,                            MO(_FN2),                  _______, _______, _______,                            KC_HOME, KC_PGDN, KC_END
    ),
    [_FN2] = LAYOUT_ansi_regular_shift_regular_backspace(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, HPT_RST,          RESET,   _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, HPT_DWLI,_______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, HPT_TOG, _______, _______, HPT_DWLD,_______,                   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                            _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______,                            _______, _______, _______
    )
};