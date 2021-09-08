// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H
#ifdef OLED_DRIVER_ENABLE
#   include "gatlee.h"
#endif

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used
#define D_MUTE KC_F16 // Discord mute
#define D_DEAF KC_F15 // Discord deafen


// enum layers { BASE, MBO, MEDIA, NAV, MOUSE, SYM, NUM, FUN, GAME};

#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif


char wpm_str[16];

// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_miryoku(
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
LCTL_T(KC_A),      LALT_T(KC_S),      LSFT_T(KC_D),      LGUI_T(KC_F),      KC_G,              KC_H,              LGUI_T(KC_J),      LSFT_T(KC_K),      LALT_T(KC_L),      LCTL_T(KC_SCOLON),
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
U_NP,              U_NP,              LT(MEDIA, KC_DEL), LT(NAV, KC_ESC),   LT(MOUSE, KC_TAB), LT(FUN, KC_ENT),   LT(SYM, KC_SPC),   LT(NUM, KC_BSPC),  U_NP,              U_NP
),
[NAV] = LAYOUT_miryoku(
RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_SPC,  KC_BSPC, U_NP,    U_NP
),
[MOUSE] = LAYOUT_miryoku(
RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
),
[MEDIA] = LAYOUT_miryoku(
RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    D_MUTE,  D_DEAF,  U_NA,    U_NA,
KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, U_NA,    KC_MPRV, KC_MPRV, KC_MPLY, KC_MNXT, U_NU,
U_NA,    U_NA,    U_NA,    U_NA,    U_NA,    KC_MUTE, KC_VOLD, KC_VOLU, KC_MUTE, U_NU,
U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_SPC,  KC_BSPC, U_NP,    U_NP
),
[MBO] = LAYOUT_miryoku(
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
),
[NUM] = LAYOUT_miryoku(
KC_LBRC, KC_1,    KC_2,    KC_3,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
KC_0,    KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL,
KC_GRV,  KC_7,    KC_8,    KC_9,    KC_BSLS, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
),
[SYM] = LAYOUT_miryoku(
KC_LCBR, KC_EXLM, KC_AT,   KC_HASH, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
KC_LPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL,
KC_TILD, KC_AMPR, KC_ASTR, KC_LPRN, KC_PIPE, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
),
[FUN] = LAYOUT_miryoku(
KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LGUI, KC_LSFT, KC_LALT, KC_LCTL,
KC_F10,  KC_F7,   KC_F8,   KC_F9,   KC_PAUS, U_NA,    U_NA,    U_NA,    U_NA,    U_NA,
U_NP,    U_NP,    KC_APP,  KC_ESC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
)
};
