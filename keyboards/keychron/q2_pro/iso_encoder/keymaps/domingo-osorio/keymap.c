/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "keymap_spanish.h"
#include QMK_KEYBOARD_H

enum unicode_names {
  //GRIN, // grinning face 😊
  //TJOY, // tears of joy 😂
  //SMILE, // grining face with smiling eyes 😁
  //HEART, // heart ❤
  //EYERT, // smiling face with heart shaped eyes 😍
  //CRY, // crying face 😭
  //SMEYE, // smiling face with smiling eyes 😊
  //UNAMU, // unamused 😒
  //KISS, // kiss 😘
  //HART2, // two hearts 💕
  //WEARY, // weary 😩
  //OKHND, // ok hand sign 👌
  //PENSV, // pensive 😔
  //SMIRK, // smirk 😏
  //RECYC, // recycle ♻
  //WINK, // wink 😉
  //THMUP, // thumb up 👍
  //THMDN, // thumb down 👎
  //PRAY, // pray 🙏
  //PHEW, // relieved 😌
  //MUSIC, // musical notes
  //FLUSH, // flushed 😳
  //CELEB, // celebration 🙌
  //CRY2, // crying face 😢
  //COOL, // smile with sunglasses 😎
  //NOEVS, // see no evil
  //NOEVH, // hear no evil
  //NOEVK, // speak no evil
  //POO, // pile of poo
  //EYES, // eyes
  //VIC, // victory hand
  //BHART, // broken heart
  //SLEEP, // sleeping face
  //SMIL2, // smiling face with open mouth & sweat
  //HUNRD, // 100
  //CONFU, // confused
  //TONGU, // face with tongue & winking eye
  //DISAP, // disappointed
  //YUMMY, // face savoring delicious food
  //CLAP, // hand clapping
  //FEAR, // face screaming in fear
  //HORNS, // smiling face with horns
  //HALO, // smiling face with halo
  //BYE, // waving hand
  //SUN, // sun
  //MOON, // moon
  //SKULL, // skull
  //ROLF, // Risa a carcajadas
  BQN_SPACE,
  BQN_TILDE,
  BQN_TILDE2,
  BQN_AE01,
  BQN_AE01_2,
  BQN_AE02,
  BQN_AE02_2,
  BQN_AE03,
  BQN_AE03_2,
  BQN_AE04,
  BQN_AE04_2,
  BQN_AE05,
  BQN_AE05_2,
  BQN_AE06,
  BQN_AE06_2,
  BQN_AE07,
  BQN_AE07_2,
  BQN_AE08,
  BQN_AE08_2,
  BQN_AE09,
  BQN_AE09_2,
  BQN_AE10,
  BQN_AE10_2,
  BQN_AE11,
  BQN_AE11_2,
  BQN_AE12,
  BQN_AE12_2,
  BQN_AD01,
  BQN_AD01_2,
  BQN_AD02,
  BQN_AD02_2,
  BQN_AD03,
  BQN_AD03_2,
  BQN_AD04,
  BQN_AD04_2,
  BQN_AD05,
  BQN_AD05_2,
  BQN_AD07,
  BQN_AD08,
  BQN_AD08_2,
  BQN_AD09,
  BQN_AD09_2,
  BQN_AD10,
  BQN_AD10_2,
  BQN_AD11,
  BQN_AD11_2,
  BQN_AD12,
  BQN_AD12_2,
  BQN_AC01,
  BQN_AC01_2,
  BQN_AC02,
  BQN_AC02_2,
  BQN_AC03,
  BQN_AC04,
  BQN_AC04_2,
  BQN_AC05,
  BQN_AC05_2,
  BQN_AC06,
  BQN_AC06_2,
  BQN_AC07,
  BQN_AC08,
  BQN_AC08_2,
  BQN_AC09,
  BQN_AC09_2,
  BQN_AC10,
  BQN_AC10_2,
  BQN_AC11,
  BQN_AC11_2,
  BQN_AB01,
  BQN_AB01_2,
  BQN_AB02,
  BQN_AB02_2,
  BQN_AB03,
  BQN_AB04,
  BQN_AB04_2,
  BQN_AB05,
  BQN_AB05_2,
  BQN_AB07,
  BQN_AB07_2,
  BQN_AB08,
  BQN_AB08_2,
  BQN_AB09,
  BQN_AB09_2,
  BQN_AB10,
  BQN_AB10_2,
  BQN_LSGT,
  BQN_LSGT_2,
};

const uint32_t PROGMEM unicode_map[] = {
  //[GRIN] = 0x1F600,
  //[TJOY] = 0x1F602,
  //[SMILE] = 0x1F601,
  //[HEART] = 0x2764,
  //[EYERT] = 0x1f60d,
  //[CRY] = 0x1f62d,
  //[SMEYE] = 0x1F60A,
  //[UNAMU] = 0x1F612,
  //[KISS] = 0x1F618,
  //[HART2] = 0x1F495,
  //[WEARY] = 0x1F629,
  //[OKHND] = 0x1F44C,
  //[PENSV] = 0x1F614,
  //[SMIRK] = 0x1F60F,
  //[RECYC] = 0x267B,
  //[WINK] = 0x1F609,
  //[THMUP] = 0x1F44D,
  //[THMDN] = 0x1F44E,
  //[PRAY] = 0x1F64F,
  //[PHEW] = 0x1F60C,
  //[MUSIC] = 0x1F3B6,
  //[FLUSH] = 0x1F633,
  //[CELEB] = 0x1F64C,
  //[CRY2] = 0x1F622,
  //[COOL] = 0x1F60E,
  //[NOEVS] = 0x1F648,
  //[NOEVH] = 0x1F649,
  //[NOEVK] = 0x1F64A,
  //[POO] = 0x1F4A9,
  //[EYES] = 0x1F440,
  //[VIC] = 0x270C,
  //[BHART] = 0x1F494,
  //[SLEEP] = 0x1F634,
  //[SMIL2] = 0x1F605,
  //[HUNRD] = 0x1F4AF,
  //[CONFU] = 0x1F615,
  //[TONGU] = 0x1F61C,
  //[DISAP] = 0x1F61E,
  //[YUMMY] = 0x1F60B,
  //[CLAP] = 0x1F44F,
  //[FEAR] = 0x1F631,
  //[HORNS] = 0x1F608,
  //[HALO] = 0x1F607,
  //[BYE] = 0x1F44B,
  //[SUN] = 0x2600,
  //[MOON] = 0x1F314,
  //[SKULL] = 0x1F480,
  //[ROLF] = 0x1F923,
  [BQN_SPACE] = 0x203F,
  [BQN_TILDE] = 0x02DC,
  [BQN_TILDE2] = 0x00AC,
  [BQN_AE01] =  0x002D8,
  [BQN_AE01_2] = 0x02389,
  [BQN_AE02] =  0x000A8,
  [BQN_AE02_2] = 0x02687,
  [BQN_AE03] =  0x0207C,
  [BQN_AE03_2] = 0x0235F,
  [BQN_AE04] =  0x0231C,
  [BQN_AE04_2] = 0x025F6,
  [BQN_AE05] =  0x000B4,
  [BQN_AE05_2] = 0x02298,
  [BQN_AE06] =  0x002DD,
  [BQN_AE06_2] = 0x0238A,
  [BQN_AE07] =  0x000AF,
  [BQN_AE07_2] = 0x0234E,
  [BQN_AE08] =  0x0221E,
  [BQN_AE08_2] = 0x02355,
  [BQN_AE09] =  0x000AF,
  [BQN_AE09_2] = 0x027E8,
  [BQN_AE10] =  0x02022,
  [BQN_AE10_2] = 0x027E9,
  [BQN_AE11] =  0x000F7,
  [BQN_AE11_2] = 0x0221A,
  [BQN_AE12] =  0x000D7,
  [BQN_AE12_2] = 0x022C6,
  [BQN_AD01] =  0x0233D,
  [BQN_AD01_2] = 0x02199,
  [BQN_AD02] =  0x1D568,
  [BQN_AD02_2] = 0x1D54E,
  [BQN_AD03] =  0x0220A,
  [BQN_AD03_2] = 0x02377,
  [BQN_AD04] =  0x02191,
  [BQN_AD04_2] = 0x1D563,
  [BQN_AD05] =  0x02227,
  [BQN_AD05_2] = 0x0234B,
  [BQN_AD07] =  0x02294,
  [BQN_AD08] =  0x0228F,
  [BQN_AD08_2] = 0x02291,
  [BQN_AD09] =  0x02290,
  [BQN_AD09_2] = 0x02292,
  [BQN_AD10] =  0x003C0,
  [BQN_AD10_2] = 0x02373,
  [BQN_AD11] =  0x02190,
  [BQN_AD11_2] = 0x022A3,
  [BQN_AD12] =  0x02192,
  [BQN_AD12_2] = 0x022A2,
  [BQN_AC01] =  0x02349,
  [BQN_AC01_2] = 0x02196,
  [BQN_AC02] =  0x1D564,
  [BQN_AC02_2] = 0x1D54A,
  [BQN_AC03] =  0x02195,
  [BQN_AC04] =  0x1D557,
  [BQN_AC04_2] = 0x1D53D,
  [BQN_AC05] =  0x1D558,
  [BQN_AC05_2] = 0x1D53E,
  [BQN_AC06] =  0x022B8,
  [BQN_AC06_2] = 0x000AB,
  [BQN_AC07] =  0x02218,
  [BQN_AC08] =  0x025CB,
  [BQN_AC08_2] = 0x0233E,
  [BQN_AC09] =  0x027DC,
  [BQN_AC09_2] = 0x000BB,
  [BQN_AC10] =  0x022C4,
  [BQN_AC10_2] = 0x000B7,
  [BQN_AC11] =  0x021A9,
  [BQN_AC11_2] = 0x002D9,
  [BQN_AB01] =  0x0294A,
  [BQN_AB01_2] = 0x022C8,
  [BQN_AB02] =  0x1D569,
  [BQN_AB02_2] = 0x1D54F,
  [BQN_AB03] =  0x02193,
  [BQN_AB04] =  0x02228,
  [BQN_AB04_2] = 0x02352,
  [BQN_AB05] =  0x0230A,
  [BQN_AB05_2] = 0x02308,
  [BQN_AB07] =  0x02261,
  [BQN_AB07_2] = 0x02262,
  [BQN_AB08] =  0x0223E,
  [BQN_AB08_2] = 0x02264,
  [BQN_AB09] =  0x0224D,
  [BQN_AB09_2] = 0x02265,
  [BQN_AB10] =  0x02260,
  [BQN_AB10_2] = 0x021D0,
  [BQN_LSGT] =  0x2264,
  [BQN_LSGT_2] = 0x2265,
};

enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
  //SMILEY,
  BQN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_iso_68(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                     KC_DEL,
        MO(BQN),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,            KC_HOME,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN1),MO(FN2), KC_LEFT,  KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_iso_68(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_MUTE,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                     KC_DEL,
        MO(BQN),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,            KC_HOME,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN1),MO(FN2), KC_LEFT,  KC_DOWN, KC_RGHT),

    [MAC_FN1] = LAYOUT_iso_68(
        ES_MORD,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,           RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                     _______,
        _______,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______, _______),

    [WIN_FN1] = LAYOUT_iso_68(
        ES_MORD,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,           RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                     _______,
        _______,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______, _______),

    [FN2] = LAYOUT_iso_68(
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,           _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                     _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,           _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______, _______),
    //[SMILEY] = LAYOUT_iso_68(
    //    UM(GRIN),  UM(TJOY),    UM(SMILE),    UM(HEART),    UM(EYERT),    UM(CRY),    UM(SMEYE),    UM(UNAMU),    UM(KISS),    UM(HART2),    UM(WEARY),   UM(OKHND),   UM(PENSV),   _______,           _______,
    //    UM(SMIRK),  UM(RECYC),  UM(WINK),  UM(THMUP),  UM(THMDN),  UM(PRAY),  UM(PHEW),  UM(MUSIC),  UM(FLUSH),  UM(CELEB),  UM(CRY2),  UM(COOL),  UM(NOEVS),                     _______,
    //    _______,  UM(NOEVK),  UM(POO),  UM(EYES),  UM(VIC),  UM(BHART),  UM(SLEEP),  UM(SMIL2),  UM(HUNRD),  UM(CONFU),  UM(TONGU),  UM(DISAP),  UM(YUMMY),  _______,           _______,
    //    UM(CLAP),  UM(FEAR),  UM(HORNS),  UM(HALO),  UM(BYE),  UM(SUN),  UM(MOON),  UM(SKULL),  UM(ROLF),  _______,  _______,  _______,            _______,  _______,
    //    UM(NOEVH),  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______, _______),
    [BQN] = LAYOUT_iso_68(
        UP(BQN_TILDE, BQN_TILDE2), UP(BQN_AE01, BQN_AE01_2), UP(BQN_AE02, BQN_AE02_2), UP(BQN_AE03, BQN_AE03_2), UP(BQN_AE04, BQN_AE04_2), UP(BQN_AE05, BQN_AE05_2), UP(BQN_AE06, BQN_AE06_2), UP(BQN_AE07, BQN_AE07_2), UP(BQN_AE08, BQN_AE08_2), UP(BQN_AE09, BQN_AE09_2), UP(BQN_AE10, BQN_AE10_2), UP(BQN_AE11, BQN_AE11_2), UP(BQN_AE12, BQN_AE12_2),   _______,           _______,
        _______,  UP(BQN_AD01, BQN_AD01_2),  UP(BQN_AD02, BQN_AD02_2),  UP(BQN_AD03, BQN_AD03_2),  UP(BQN_AD04, BQN_AD04_2),  UP(BQN_AD05, BQN_AD05_2),  _______,  UC(BQN_AD07),  UP(BQN_AD08, BQN_AD08_2),  UP(BQN_AD09, BQN_AD09_2),  UP(BQN_AD10, BQN_AD10_2),  UP(BQN_AD11, BQN_AD11_2),  UP(BQN_AD12, BQN_AD12_2),                     _______,
        _______,  UP(BQN_AC01, BQN_AC01_2),  UP(BQN_AC02, BQN_AC02_2),  UC(BQN_AC03),  UP(BQN_AC04, BQN_AC04_2),  UP(BQN_AC05, BQN_AC05_2),  UP(BQN_AC06, BQN_AC06_2),  UC(BQN_AC07),  UP(BQN_AC08, BQN_AC08_2),  UP(BQN_AC09, BQN_AC09_2),  UP(BQN_AC10, BQN_AC10_2),  UP(BQN_AC11, BQN_AC11_2),  _______,  _______,           _______,
        _______,  UP(BQN_LSGT, BQN_LSGT_2),  UP(BQN_AB01, BQN_AB01_2),  UP(BQN_AB02, BQN_AB02_2),  UC(BQN_AB03),  UP(BQN_AB04, BQN_AB04_2),  UP(BQN_AB05, BQN_AB05_2),  _______,  UP(BQN_AB07, BQN_AB07_2),  UP(BQN_AB08, BQN_AB08_2),  UP(BQN_AB09, BQN_AB09_2),  UP(BQN_AB10, BQN_AB10_2),            _______,  _______,
        _______,  _______,  _______,                                UC(BQN_SPACE),                          _______,  _______,  _______,  _______,  _______, _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_FN1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [FN2]      = {ENCODER_CCW_CW(_______, _______) },
    //[SMILEY]   = {ENCODER_CCW_CW(_______, _______) },
    [BQN]      = {ENCODER_CCW_CW(_______, _______) },
};
#endif // ENCODER_MAP_ENABLE
