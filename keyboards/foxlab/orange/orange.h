#ifndef BMINI_H
#define BMINI_H

#include "quantum.h"

#define LAYOUT_ansi( \
  K05,      K25, K35, K45, K55, K06, KA6, KA7, K07, KB5, KC5, KD5, KE5,    KD1, KE1, KE2, \
  K04, K14, K24, K34, K44, K54, K16, KB6, KB7, K17, KA4, KB4, KC4, KE4,    KD0, KE0, K97, \
  K03, K13, K23, K33, K43, K53, K26, KC6, KC7, K27, KA3, KB3, KC3, KD3,    K67, K77, K87, \
  K02, K12, K22, K32, K42, K52, K36, KD6, KD7, K37, KA2, KB2,      KD2,                   \
  K01,      K11, K21, K31, K41, K51, K46, KE6, KE7, K47, KA1, KB1, KC1,         K86,      \
  K00, K10, K20,           K56,                     K57, KA0, KB0, KC0,    K66, K76, K96  \
){ \
  { K00, K10,   K20, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KA0,   KB0, KC0,   KD0,   KE0   }, \
  { K01, K11,   K21, K31,   K41,   K51,   KC_NO, KC_NO, KC_NO, KC_NO, KA1,   KB1, KC1,   KD1,   KE1   }, \
  { K02, K12,   K22, K32,   K42,   K52,   KC_NO, KC_NO, KC_NO, KC_NO, KA2,   KB2, KC_NO, KD2,   KE2   }, \
  { K03, K13,   K23, K33,   K43,   K53,   KC_NO, KC_NO, KC_NO, KC_NO, KA3,   KB3, KC3,   KD3,   KC_NO }, \
  { K04, K14,   K24, K34,   K44,   K54,   KC_NO, KC_NO, KC_NO, KC_NO, KA4,   KB4, KC4,   KC_NO, KE4   }, \
  { K05, KC_NO, K25, K35,   K45,   K55,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KB5, KC5,   KD5,   KE5   }, \
  { K06, K16,   K26, K36,   K46,   K56,   K66,   K76,   K86,   K96,   KA6,   KB6, KC6,   KD6,   KE6   }, \
  { K07, K17,   K27, K37,   K47,   K57,   K67,   K77,   K87,   K97,   KA7,   KB7, KC7,   KD7,   KE7   } \
}

#define LAYOUT_iso( \
  K05,      K25, K35, K45, K55, K06, KA6, KA7, K07, KB5, KC5, KD5, KE5,    KD1, KE1, KE2, \
  K04, K14, K24, K34, K44, K54, K16, KB6, KB7, K17, KA4, KB4, KC4, KE4,    KD0, KE0, K97, \
  K03, K13, K23, K33, K43, K53, K26, KC6, KC7, K27, KA3, KB3, KC3, KD3,    K67, K77, K87, \
  K02, K12, K22, K32, K42, K52, K36, KD6, KD7, K37, KA2, KB2, KC2, KD2,  \
  K01, K30, K11, K21, K31, K41, K51, K46, KE6, KE7, K47, KA1, KB1, KC1,         K86, \
  K00, K10, K20,           K56,                     K57, KA0, KB0, KC0,    K66, K76, K96  \
){ \
  { K00, K10,   K20, K30,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KA0,   KB0, KC0,   KD0,   KE0   }, \
  { K01, K11,   K21, K31,   K41,   K51,   KC_NO, KC_NO, KC_NO, KC_NO, KA1,   KB1, KC1,   KD1,   KE1   }, \
  { K02, K12,   K22, K32,   K42,   K52,   KC_NO, KC_NO, KC_NO, KC_NO, KA2,   KB2, KC2,   KD2,   KE2   }, \
  { K03, K13,   K23, K33,   K43,   K53,   KC_NO, KC_NO, KC_NO, KC_NO, KA3,   KB3, KC3,   KD3,   KC_NO }, \
  { K04, K14,   K24, K34,   K44,   K54,   KC_NO, KC_NO, KC_NO, KC_NO, KA4,   KB4, KC4,   KC_NO, KE4   }, \
  { K05, KC_NO, K25, K35,   K45,   K55,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KB5, KC5,   KD5,   KE5   }, \
  { K06, K16,   K26, K36,   K46,   K56,   K66,   K76,   K86,   K96,   KA6,   KB6, KC6,   KD6,   KE6   }, \
  { K07, K17,   K27, K37,   K47,   K57,   K67,   K77,   K87,   K97,   KA7,   KB7, KC7,   KD7,   KE7   } \
}

#endif
