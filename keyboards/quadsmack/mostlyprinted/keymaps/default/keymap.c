// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NAV,
    _MOUSE,
    _NUM,
    _SYM,
    _FUN
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
    * ┌───┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┐
    * │ Q │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │
    * ├───┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
    * │ A │S/ALT│D/CMD│F/SFT│  G  │       │  H  │J/SFT│K/CMD│L/ALT│  ;  │
    * ├───┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┤
    * │ Z │  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  /  │
    * └───┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┘
    *               ┌───┬───┐                   ┌───┬───┐
    *               │   │ESC├───┐           ┌───┤DEL│   │
    *               └───┴───┤SPC├───┐   ┌───┤BSP├───┴───┘
    *                       └───┤TAB│   │ENT├───┘
    *                           └───┘   └───┘
    */
    /* Base */
    [_QWERTY] = LAYOUT(
        KC_Q,      KC_W,        KC_E,        KC_R,        KC_T,          KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,
        KC_A,      ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F), KC_G,          KC_H,    SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), KC_SCLN,
        KC_Z,      KC_X,        KC_C,        KC_V,        KC_B,          KC_N,    KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,
        /*NO-KEY*/ KC_LSFT,     LT(_MOUSE,KC_ESC),      LT(_NAV,KC_SPC),      LT(_MOUSE,KC_TAB),        LT(_SYM,KC_ENT),  LT(_NUM,KC_BSPC),     LT(_FUN,KC_DEL),     KC_RSFT      /*NO-KEY*/
    ),
    /* Navigation */
    [_NAV] = LAYOUT(
        XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,    XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,   KC_LALT,   KC_LCTL,  KC_LSFT,    XXXXXXX,         XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,
        XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,    XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        /*NO-KEY*/ XXXXXXX,   XXXXXXX,  _______,    XXXXXXX,         KC_ENT,     KC_BSPC,    KC_DEL,     XXXXXXX   /*NO-KEY*/
    ),
    /* Mouse */
    [_MOUSE] = LAYOUT(
        XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,    XXXXXXX,         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,   KC_LALT,   KC_LCTL,  KC_LSFT,    XXXXXXX,         XXXXXXX,    MS_LEFT,    MS_DOWN,    MS_UP,      MS_RGHT,
        XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,    XXXXXXX,         XXXXXXX,    MS_WHLL,    MS_WHLD,    MS_WHLU,    MS_WHLR,
        /*NO-KEY*/ XXXXXXX,   XXXXXXX,  XXXXXXX,    _______,         MS_BTN1,    MS_BTN2,    MS_BTN3,     XXXXXXX   /*NO-KEY*/
    ),
    /* Number */
    [_NUM] = LAYOUT(
        _______,   KC_7,      KC_8,     KC_9,       KC_T,        _______,   _______,  _______,   _______,  _______,
        _______,   KC_4,      KC_5,     KC_6,       KC_G,        KC_H,      _______,  _______,   _______,  _______,
        _______,   KC_1,      KC_2,     KC_3,       KC_B,        _______,   _______,  _______,   _______,  _______,
        /*NO-KEY*/ _______,   _______,  _______,    _______,     _______,   _______,  _______,   _______  /*NO-KEY*/
    ),
    /* Symbol */
    [_SYM] = LAYOUT(
        KC_LCBR,   KC_AMPR,   KC_ASTR,  KC_LPRN,    KC_T,            KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,
        KC_COLN,   KC_DLR,    KC_PERC,  KC_CIRC,    KC_G,            KC_H,    SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), KC_SCLN,
        KC_TILD,   KC_EXLM,   KC_AT,    KC_HASH,    KC_B,            KC_N,    KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,
        /*NO-KEY*/ _______,   _______,  _______,    _______,         _______,   _______,  _______,      _______   /*NO-KEY*/
    ),
    [_FUN] = LAYOUT(
        KC_F12,      KC_F7,     KC_F8,    KC_F9,        _______,        _______,   _______,  _______,      _______,  _______,
        KC_F11,      KC_F4,     KC_F5,    KC_F6,        _______,        _______,   _______,  _______,      _______,  _______,
        KC_F10,      KC_F1,     KC_F2,    KC_F3,        _______,        _______,   _______,  _______,      _______,  _______,
        /*NO-KEY*/   _______,   _______,  _______,      _______,        _______,   _______,  _______,      _______  /*NO-KEY*/
    )
};
