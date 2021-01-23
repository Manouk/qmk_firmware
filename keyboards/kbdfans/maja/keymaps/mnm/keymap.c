#include QMK_KEYBOARD_H

// Helpful defines
#define _______  KC_TRNS
#define CTL_X    MT(MOD_LCTL, KC_X)
#define CTL_DOT  MT(MOD_LCTL, KC_DOT)
#define ALT_Z    MT(MOD_LALT, KC_Z)
#define ALT_SLSH MT(MOD_LALT, KC_SLSH)

// Tap Dance
enum {
    TD_1
};

// Layers
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_BL] = LAYOUT( /* Base */
                       KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
                       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
                       KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
                       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
                       KC_LCTL,                   KC_LALT, KC_LCTL,          MO(1),            KC_SPC,           TD(TD_1),         KC_LEFT, KC_DOWN, KC_RIGHT),
		[_FL] = LAYOUT( /* FN */
                       KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  RESET,   KC_TRNS,
                       KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET,   KC_HOME,
                       KC_CAPS, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          EEP_RST, KC_END,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLU,
                       KC_TRNS,                   KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_MPRV, KC_VOLD, KC_MNXT),
 };


// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for alt, twice for ctrl
    [TD_1] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_RCTL),
};
