#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        /*NO-KEY*//*NO-KEY*/  KC_0,  // Top row (KC10 in the top-right)
        KC_1,   KC_2,   KC_3,   // Row 2
        KC_4,   KC_5,   KC_6,   // Row 3
        KC_7,   KC_8,   KC_9    // Row 4
    ),
};


