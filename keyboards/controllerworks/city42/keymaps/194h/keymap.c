#include QMK_KEYBOARD_H

// us altgr-weur specific aliases
// Endash
#define NO_EN RALT(KC_MINS)
// Emdash
#define NO_EM RALT(S(KC_MINS))
// Norwegian ae
#define NO_AE RALT(KC_W)
// Norwegian oe
#define NO_OE RALT(KC_T)
// Norwegian aa
#define NO_AA RALT(KC_Q)

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
//LCTL on hold, Z on tap
#define C_Z LCTL_T(KC_Z)
//LGUI on hold, Tab on tap
#define G_TAB LGUI_T(KC_TAB)
//RGUI on hold, Equal on tap
#define G_EQL RGUI_T(KC_EQL)

//Layers
#define L1 0
#define L2 1
#define L3 2
#define L4 3
#define L5 4

// Momentary switch to layer
#define MO_L3 MO(L3)
#define MO_L4 MO(L4)
#define MO_L5 MO(L5)
// Momentary switch to layer - One Shot Layer
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)
#define OSL_L5 OSL(L5)
//Toggle layers
#define TO_L1 TO(L1)
#define TO_L3 TO(L3)
#define TO_L3 TO(L3)
#define TO_L4 TO(L4)
#define TO_L2 TO(L2)
//L3 on hold, X on tap
#define L3_X LT(L3, KC_X)
//L3 on hold, . on tap
#define L3_DOT LT(L3, KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L1] = LAYOUT_split_3x6_3(

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        G_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    G_EQL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSPC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_MINS, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       O_LSFT,     C_Z,    L3_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,  A_COMM,  L3_DOT,  C_SLSH,  O_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC,  OSL_L4,  KC_SPC,     KC_ENT,  OSL_L4, KC_COLN
                                      //`--------------------------'  `--------------------------'

  ),

  [L2] = LAYOUT_split_3x6_3(

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,   NO_AA,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______,   NO_OE,   NO_AE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'

  ),

  [L3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX,   KC_AT, KC_HASH, KC_TILD,                      KC_QUES, KC_EXLM, KC_PIPE,  KC_AND, KC_PLUS,  KC_EQL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_ASTR, KC_LBRC,   KC_PO,   KC_PC, KC_RBRC,                       KC_HAT, KC_RCBR, KC_LCBR,  KC_DLR, KC_MINS,  KC_DQT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_BSLS, KC_PERC, XXXXXXX,  KC_GRV,                        NO_EN,   NO_EM,   KC_LT,   KC_GT, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_UNDS,    XXXXXXX, _______, KC_SCLN
                                      //`--------------------------'  `--------------------------'
  ),

  [L4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, KC_RGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______, KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_LCTL,  KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO_L5,    KC_6,    KC_1,    XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [L5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        TO_L1,   TO_L2, XXXXXXX, MS_WHLU, XXXXXXX, XXXXXXX,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN3, MS_BTN2, MS_BTN1,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, QK_BOOT, XXXXXXX, MS_WHLD, XXXXXXX, XXXXXXX,                       KC_F11,  KC_F12, KC_LALT, XXXXXXX, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, MS_BTN1,     KC_ENT, _______,   TO_L1
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
        case 1:  // L2 - Red
            rgblight_sethsv_noeeprom(0, 255, 255);   // HSV Red
            break;
        case 2:  // L3 - White
            rgblight_sethsv_noeeprom(0, 0, 255);  // HSV White
            break;
        case 3:  // L4 - Blue
            rgblight_sethsv_noeeprom(170, 255, 255); // HSV Blue
            break;
        case 4:  // L5 - Lime
            rgblight_sethsv_noeeprom(75, 255, 255);   // HSV Lime
            break;
        default:
            rgblight_disable();
            break;
    }
    return state;
}
