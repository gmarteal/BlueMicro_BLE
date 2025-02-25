/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

 
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(   
    KC_ESC,  KC_F1,       KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,      KC_F7,       KC_F8,    KC_F9,       KC_F10,     KC_F11, KC_F12, KC_DELETE, KC_NO,
    KC_GRV,  KC_1,       KC_2,    KC_3,    KC_4,    KC_5,    KC_6,      KC_7,       KC_8,    KC_9,       KC_0,     KC_MINUS, KC_EQUAL, KC_BSPC, KC_PGUP,
    KC_TAB,  KC_Q,       KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,      KC_U,       KC_I,    KC_O,       KC_P,     KC_LBRACKET, KC_RBRACKET, KC_BSLASH, KC_PGDN,
    KC_CAPSLOCK,  KC_A,       KC_S,    KC_D,    KC_F,    KC_G,    KC_H,      KC_J,       KC_K,    KC_L,   KC_SCOLON, KC_BSLASH, KC_ENTER, KC_NO, KC_NO,   
    KC_LSFT, KC_Z,       KC_X,    KC_C,    KC_V,    KC_B,    KC_N,      KC_M,    KC_COMM, KC_DOT, KC_SLASH,  KC_RSHIFT, KC_UP, KC_NO, KC_NO,
    KC_LCTL,  KC_LGUI,  KC_LALT ,      KC_NO, KC_NO, KC_NO, KC_SPC,  KC_NO, KC_RALT, KC_NO, KC_RCTL, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT )};

 
void setupKeymap() {

/*
    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
    _______,    _______,  _______,  _______,  _______,  KC_LBRC,  KC_RBRC,  KC_4,     KC_5,     KC_6,     KC_SCLN,  _______,
    KC_LSFT, KC_Z,       KC_X,    KC_C,    KC_V,    KC_LBRACKET,    KC_RBRACKET,    KC_1,    KC_2, KC_3, KC_UP,  KC_ENT,
    KC_GRV , KC_LCTL, KC_LALT, _______, KC_BSPC,  KC_SPC, KC_RALT, KC_LEFT,      KC_DOWN, KC_RIGHT );


    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_ESC,  KC_F1,       KC_F2,    KC_F3,    KC_F4,    KC_T,    KC_Y,    KC_U,       KC_I,    KC_O,       KC_P,     KC_NO, KC_BSPC,
    KC_TAB,  KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_G,    KC_H,    KC_J,       KC_K,    KC_L,   KC_QUOTE, KC_BSLASH,    
    KC_LSFT, KC_F9,       KC_F10,    KC_F11,    KC_F12,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLASH,  KC_ENT,
    KC_GRV , KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC,  KC_SPC, KC_RALT, KC_RCTL,  LAYER_2,   
    KC_DOWN );

*/
    /*
     * add the other layers
     */
  

}

