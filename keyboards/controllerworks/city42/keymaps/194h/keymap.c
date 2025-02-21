#include QMK_KEYBOARD_H

//Some of the default aliases make no sense
#define KC_AND KC_AMPERSAND
#define KC_PO KC_LEFT_PAREN
#define KC_PC KC_RIGHT_PAREN
#define KC_HAT KC_CIRCUMFLEX

//ONE SHOT MODS
#define O_LSFT OSM(MOD_LSFT)
#define O_RSFT OSM(MOD_RSFT)

//RALT on hold, ' on tap
#define RA_QUOT RALT_T(KC_QUOT)
//ALT on hold, , on tap
#define A_COMM LALT_T(KC_COMM)
//RCTL on hold, / on tap
#define C_SLSH RCTL_T(KC_SLSH)
//RGUI on hold, Enter on tap
#define G_ENT RGUI_T(KC_ENT)
//LCTL on hold, Z on tap
#define C_Z LCTL_T(KC_Z)

//Hold RGUI and send direction key
#define LEFT_G RGUI(KC_LEFT)
#define DOWN_G RGUI(KC_DOWN)
#define UP_G RGUI(KC_UP)
#define RGHT_G RGUI(KC_RGHT)

//Layers
#define L1 0
#define L2 1
#define L3 2
#define L4 3

// Momentary switch to layer
#define MO_L2 MO(L2)
#define MO_L3 MO(L3)
#define MO_L4 MO(L4)
// Momentary switch to layer - One Shot Layer
#define OSL_L2 OSL(L2)
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)
//Toggle layers
#define TO_L1 TO(L1)
#define TO_L2 TO(L2)
#define TO_L3 TO(L3)
#define TO_L4 TO(L4)
//L3 on hold, Esc on tap
#define L3_ESC LT(L3, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L1] = LAYOUT_split_3x6_3(

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSPC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, RA_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       O_LSFT,     C_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,  A_COMM,  KC_DOT,  C_SLSH,  O_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,  OSL_L2,  KC_SPC,     L3_ESC,  OSL_L2,   G_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  [L2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX,   KC_AT, XXXXXXX, KC_TILD,                      KC_QUES, KC_EXLM, KC_PIPE,  KC_AND, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_ASTR, KC_LBRC,   KC_PO,   KC_PC, KC_RBRC,                       KC_HAT, KC_RCBR, KC_LCBR,  KC_DLR, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_BSLS, KC_PERC, XXXXXXX,  KC_GRV,                      KC_HASH, KC_MINS,  KC_EQL, KC_PLUS, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______, KC_UNDS,     KC_ENT, _______,   TO_L4
                                      //`--------------------------'  `--------------------------'
  ),

  [L3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_COLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX,  KC_DOT, KC_COMM, XXXXXXX, XXXXXXX,                       LEFT_G,  DOWN_G,    UP_G,  RGHT_G, KC_RCTL, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,    KC_6,    KC_1,    XXXXXXX, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),

  [L4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, MS_WHLU, XXXXXXX, XXXXXXX,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_NUM,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN3, MS_BTN2, MS_BTN1,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, MS_WHLD, XXXXXXX, XXXXXXX,                       KC_F11,  KC_F12, KC_LALT, XXXXXXX, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______, MS_BTN1,     KC_ENT, _______,   TO_L1
                                      //`--------------------------'  `--------------------------'
  )
};


layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_enable();  // Ensure RGB is enabled when switching layers
    rgblight_mode_noeeprom(1); // Set to solid color mode (1 = static)

    switch (get_highest_layer(state)) {
        case 0:  // L1 - No lights
            rgblight_disable();
            break;
        case 1:  // L2 - Green
            rgblight_sethsv_noeeprom(85, 255, 255);  // HSV Green
            break;
        case 2:  // L3 - Blue
            rgblight_sethsv_noeeprom(170, 255, 255); // HSV Blue
            break;
        case 3:  // L4 - Red
            rgblight_sethsv_noeeprom(0, 255, 255);   // HSV Red
            break;
        case 4:  // L5 - Yellow
            rgblight_sethsv_noeeprom(43, 255, 255);  // HSV Yellow
            break;
        default:
            rgblight_disable();
            break;
    }
    return state;
}
