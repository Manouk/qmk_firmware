#include QMK_KEYBOARD_H
#include <print.h>

#define CTL_X   MT(MOD_LCTL, KC_X)
#define CTL_DOT MT(MOD_RCTL, KC_DOT)
#define ALT_Z   MT(MOD_LALT, KC_Z)
#define ALT_SLS MT(MOD_LALT, KC_SLSH)

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_ext_ansi(
    KC_ESC,  KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                 KC_PSCR,KC_SLCK, MO(1),                                 LGUI(KC_L),
    KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,       KC_INS, KC_HOME, KC_PGUP,     KC_LNUM, KC_EQL, KC_PSLS, KC_PAST,
    KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,       KC_DEL, KC_END,  KC_PGDN,     KC_P7,   KC_P8,  KC_P9,   KC_PMNS,
    KC_BSPC, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                      KC_P4,   KC_P5,  KC_P6,   KC_PPLS,
    KC_LSFT, ALT_Z,   CTL_X,  KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, CTL_DOT, ALT_SLS,                   KC_RSFT,                KC_UP,               KC_P1,   KC_P2,  KC_P3,
    KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC,                                   KC_RALT, KC_RCTL,                         KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,           KC_PDOT, KC_PENT
    ),

    [_FL] = LAYOUT_ext_ansi(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,                               _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______,
    _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                               _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,          _______,             _______, _______, _______,
    _______, _______, _______,                   _______,                                     _______, _______,                   _______, _______, _______,    _______,          _______, _______
    ),
};

void led_set_user(uint8_t usb_led) {
  led_set(usb_led);
}
