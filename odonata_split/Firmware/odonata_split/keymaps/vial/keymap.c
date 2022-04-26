/* Copyright 2022 dsayo
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


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6


 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LGUI, MO(4), KC_LALT, MO(1), KC_BSPC, KC_SPC, MO(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

[_LAYER1] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_BSLS, KC_GRV, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_NO, KC_NO, KC_LALT, KC_TRNS, KC_BSPC, KC_SPC, MO(3), KC_HOME, KC_PGDN, KC_PGUP, KC_END),

[_LAYER2] = LAYOUT(KC_LBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_PIPE, KC_RBRC, KC_LPRN, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RPRN, KC_LCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_QUES, KC_RCBR, KC_LCTL, KC_NO, KC_NO, KC_LALT, MO(3), LCTL(KC_BSPC), KC_SPC, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

[_LAYER3] = LAYOUT(TO(5), KC_NO, KC_NO, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, MO(6), KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_WH_D, KC_WH_U, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_LALT, KC_TRNS, KC_BSPC, KC_SPC, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

[_LAYER4] = LAYOUT(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGUP, KC_NO, KC_LCTL, KC_NO, KC_NO, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_END, KC_PGDN, KC_NO),

};
