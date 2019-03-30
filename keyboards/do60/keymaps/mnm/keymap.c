#include QMK_KEYBOARD_H
#include "action_layer.h"

#define SFT_INS LSFT(KC_INS)
#define SFT_SLS MT(MOD_RSFT, KC_SLSH)
#define CTL_F   MT(MOD_LCTL, KC_F)
#define CTL_J   MT(MOD_RCTL, KC_J)
#define ALT_D   MT(MOD_LALT, KC_D)
#define ALT_K   MT(MOD_LALT, KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  [0] = LAYOUT_all(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_DEL,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSLS,   \
      KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  SFT_SLS,  KC_NO,   KC_UP,    KC_SLSH,   \
      KC_LCTL, KC_LGUI, KC_LALT,                  KC_LCTL, KC_NO,  KC_SPC,                  KC_LALT, MO(1),    KC_LEFT, KC_DOWN,  KC_RIGHT),

  // 1: Function Layer
  [1] = LAYOUT_all(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_TRNS,  KC_INS,  \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_TRNS, KC_TRNS, RGB_TOG, KC_INS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,           KC_TRNS, \
      KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,           KC_TRNS, \
      KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SFT_INS,  KC_NO,   KC_PGUP,  KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_BSPC, KC_NO,   KC_TRNS,                   KC_TRNS, KC_TRNS,  KC_HOME, KC_PGDN,  KC_END),

};

// Disable the backlight
void matrix_init_user(void) {
}

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
     [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
 };

// Macros
/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) { register_code(KC_RSFT); }
      else { unregister_code(KC_RSFT); }
      break
  }

  return MACRO_NONE;
};
*/
// Loop
void matrix_scan_user(void) {
  // Empty
};
