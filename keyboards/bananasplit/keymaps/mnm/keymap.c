#include QMK_KEYBOARD_H

#define DEFAULT_LAYER 0
#define LAYER_1       1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT_LAYER] = LAYOUT_all( \
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,   KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSLS, KC_DEL, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_CAPS, \
    KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT, \
    KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT, MO(LAYER_1), \
    KC_LCTL, KC_LGUI, KC_LALT,          KC_LCTL, MO(LAYER_1), KC_SPC, KC_RALT,          KC_RALT, KC_RGUI,  KC_APP,  KC_RCTL
  ),

  [LAYER_1] = LAYOUT_all( \
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_INS,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______,   _______, \
    _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______, \
    _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_DOWN, S(KC_INS), _______, \
    _______, _______, _______,          _______, _______, _______, _______,          _______, _______, _______, _______
  ),
};

const uint16_t PROGMEM fn_actions[] = {
};
