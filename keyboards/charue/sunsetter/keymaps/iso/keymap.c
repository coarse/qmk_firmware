/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114,       K116, K117, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214,       K216, K217, \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       K315, K316, K317, \
    K400, K401, K402, K403, K404,       K406,       K408,       K410,       K412, K413, K414, K415, K416, K417 \
    */
   [0] = LAYOUT_1065_iso_full_rshift(
        KC_F1,   KC_F2,   KC_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_BSPC, KC_VOLU,
        KC_F3,   KC_F4,   KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,          KC_BSLS, KC_VOLD,
        KC_F5,   KC_F6,   KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_BSLS,           KC_ENT,  KC_MUTE,
        KC_F7,   KC_F8,   KC_LSFT, KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,          KC_RSFT, KC_UP,   KC_MNXT,
        KC_F9,   KC_F10,  KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC ,          KC_SPC ,          KC_SPC ,          KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  ),
};
