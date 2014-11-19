#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC, BSLS, 1,   2,   3,   4,   5,   ENT, 6,   7,   8,   9,   0,   MINS,EQL, GRV,     \
           TAB,       Q,   W,   E,   R,   T,        Y,   U,   I,   O,   P,   LBRC,RBRC,         \
           LCTL, GRV, A,   S,   D,   F,   G,   BSPC,H,   J,   K,   L,   SCLN,QUOT,ENT, RSFT,    \
           LSFT,      Z,   X,   C,   V,   B,        N,   M,   COMM,DOT, SLSH,FN0,UP, PGDN       \
           LCTRL,LCTRL,LALT, LGUI,       FN1,   DEL,SPC,RALT,       RCTL,LEFT,DOWN,RIGHT),

    /* 1: FN 1 */
    KEYMAP(MUTE, F1,   F2,   F3,   F4,   F5,   F6,  TRNS , F7,   F8,   F9,   F10,  F11,  F12,  VOLU, VOLD, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,TRNS,  TRNS,  TRNS,    \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,TRNS,   \
           TRNS, TRNS,    TRNS,      TRNS, TRNS, TRNS,TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS ),

    /* 2: FN 2 */
    KEYMAP(MUTE, F1,   F2,   F3,   F4,   F5,   F6,  TRNS , F7,   F8,   F9,   F10,  F11,  F12,  VOLU, VOLD, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,TRNS,  TRNS,  TRNS,    \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,TRNS,   \
           TRNS, TRNS,    TRNS,      TRNS, TRNS, TRNS,TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS ),

};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_TAP_KEY(1, KC_ESC),
  [2] = ACTION_LAYER_TOGGLE(2)
};