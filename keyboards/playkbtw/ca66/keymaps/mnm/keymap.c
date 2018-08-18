#include QMK_KEYBOARD_H

#define _HOSTLAYER  0
#define _GUESTLAYER 1
#define _MEDIALAYER 2

enum my_keycodes {
  TO_DF = SAFE_RANGE,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   [0] = LAYOUT( KC_GESC,          KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, KC_INS,
                 KC_TAB,           KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_CAPS,         KC_DEL,
                 KC_BSPC,          KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,          KC_PGUP,
                 KC_LSPO, KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,          KC_UP,           KC_PGDN,
                 KC_LCTL,          KC_LGUI, KC_LALT,           KC_LCTL, KC_SPC,                    KC_LALT, TT(2),   KC_APP,  KC_LEFT,          KC_DOWN,         KC_RGHT),

   [1] = LAYOUT( KC_GESC,          KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, KC_INS,
                 KC_TAB,           KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,         KC_DEL,
                 KC_CAPS,          KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,          KC_PGUP,
                 KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,           KC_PGDN,
                 KC_LCTL,          KC_LGUI, KC_LALT,           KC_SPC,  KC_SPC,                    KC_LALT, TT(2),   KC_APP,  KC_LEFT,          KC_DOWN,         KC_RGHT),

   [2] = LAYOUT( KC_GRV,           KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13, KC_F14,  KC_PSCR,
                 KC_TRNS,          RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, RESET,           KC_PAUS,
                 KC_CAPS,          KC_MPRV, KC_MPLY, KC_MNXT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,         KC_HOME,
                 KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_WSCH,         KC_END,
                 KC_TRNS,          KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, TO_DF,   KC_WBAK,          KC_WHOM,         KC_WFWD)
  };

// Custom toggle layer keycode
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case TO_DF:
      if (record->event.pressed) {
        // Do something else when release
        switch (biton32(default_layer_state)) {
        case _GUESTLAYER:
          default_layer_set(1UL << _HOSTLAYER);
          break;
        default:
          default_layer_set(1UL << _GUESTLAYER);
          break;
        }
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}

// Setup RGB when keyboard is powered on
void matrix_init_user() {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom( 0, 0, 100); // white
  rgblight_mode_noeeprom(1);
}

// Animate RGB when caps lock is set
void led_set_user(uint8_t usb_led) {
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
    rgblight_mode_noeeprom(21);
  } else {
    rgblight_mode_noeeprom(1);
  }
}

// Change RGB color when changing layer
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
  case _MEDIALAYER:
    rgblight_sethsv_noeeprom ( 43, 218, 100); // golden
    break;
  default: //  for any other layers, or the default layer
    switch (biton32(default_layer_state)) {
    case _GUESTLAYER:
      rgblight_sethsv_noeeprom (150, 255, 100); // green
      break;
    default:
      rgblight_sethsv_noeeprom( 0, 0, 100); // white
      break;
    }
    break;
  }
  return state;
}
