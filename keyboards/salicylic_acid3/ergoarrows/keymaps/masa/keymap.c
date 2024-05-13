/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "keymap_japanese.h"
#include QMK_KEYBOARD_H
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define OVR_TGL KEY_OVERRIDE_TOGGLE

const key_override_t at_key_override   = ko_make_basic(MOD_MASK_SHIFT, KC_2,    JP_AT);
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6,    JP_CIRC);
const key_override_t ampr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7,    JP_AMPR);
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8,    JP_ASTR);
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9,    JP_LPRN);
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0,    JP_RPRN);
const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, JP_UNDS);
const key_override_t eql_key_override  = ko_make_with_layers_and_negmods(0, KC_EQL, JP_EQL, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL,  JP_PLUS);

const key_override_t lbrc_key_override = ko_make_with_layers_and_negmods(0, KC_LBRC, JP_LBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t lcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, JP_LCBR);
const key_override_t rbrc_key_override = ko_make_with_layers_and_negmods(0, KC_RBRC, JP_RBRC, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t rcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, JP_RCBR);
const key_override_t bsls_key_override = ko_make_with_layers_and_negmods(0, KC_BSLS, JP_BSLS, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t pire_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, JP_PIPE);

const key_override_t quot_key_override = ko_make_with_layers_and_negmods(0, KC_QUOT, JP_QUOT, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t dquo_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO);
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, JP_COLN);

const key_override_t grv_key_override  = ko_make_with_layers_and_negmods(0, KC_CAPS, JP_GRV, ~0, (uint8_t) MOD_MASK_SHIFT);
const key_override_t tild_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_CAPS, JP_TILD);

const key_override_t **key_overrides = (const key_override_t *[]){
    &at_key_override,
	&circ_key_override,
	&ampr_key_override,
	&astr_key_override,
	&lprn_key_override,
    &rprn_key_override,
	&unds_key_override,
	&eql_key_override,
	&plus_key_override,
	
    &lcbr_key_override,
    &lbrc_key_override,
	&rbrc_key_override,
	&rcbr_key_override,
	&bsls_key_override,
	&pire_key_override,
	
    &dquo_key_override,
    &quot_key_override,
	&coln_key_override,

	&grv_key_override,
	&tild_key_override,
    NULL
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,--------------------------------------------------------------|   |--------------------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,        KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,        KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,        KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,        KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
     KC_LCTL,  KC_LGUI,   KC_UP, KC_LALT,  KC_SPC, KC_BSPC,  KC_DEL,     KC_BSPC,  KC_DEL,  KC_SPC, KC_RALT,   KC_UP,  KC_APP, MO(1),
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
               KC_LEFT, KC_DOWN, KC_RGHT,                                                           KC_LEFT, KC_DOWN, KC_RGHT    
  //|--------------------------------------------------------------|   |--------------------------------------------------------------'
  ),

  [1] = LAYOUT(
  //,--------------------------------------------------------------|   |--------------------------------------------------------------.
       KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, KC_PSCR, KC_SCRL, KC_LBRC, KC_RBRC,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, KC_HOME, KC_PGUP, KC_QUOT, _______,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      _______, RGB_TOG, RGB_MOD, _______, RGB_SAD, RGB_SAI, _______,     _______, _______, _______,  KC_END, KC_PGDN, _______, _______,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      _______, RGB_VAD, KC_VOLU, RGB_VAI, RGB_HUD, RGB_HUI, _______,     _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
               KC_MPRV, KC_VOLD, KC_MNXT,                                                           _______, _______, _______    
  //|--------------------------------------------------------------|   |--------------------------------------------------------------'
  ),

  [2] = LAYOUT(
  //,--------------------------------------------------------------|   |--------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX,                                                           XXXXXXX, XXXXXXX, XXXXXXX    
  //|--------------------------------------------------------------|   |--------------------------------------------------------------'
  ),

  [2] = LAYOUT(
  //,--------------------------------------------------------------|   |--------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+-----------------|   |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX,                                                           XXXXXXX, XXXXXXX, XXXXXXX    
  //|--------------------------------------------------------------|   |--------------------------------------------------------------'
  )
};
