#include QMK_KEYBOARD_H

// us altgr-weur specific aliases
// Endash
#define WEUR_EN RALT(KC_MINS)
// Emdash
#define WEUR_EM RALT(S(KC_MINS))
// Norwegian ae
#define WEUR_AE RALT(KC_W)
// Norwegian oe
#define WEUR_OE RALT(KC_T)
// Norwegian aa
#define WEUR_AA RALT(KC_Q)

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

//RGUI on hold, Enter on tap
#define G_ENT RGUI_T(KC_ENT)

//Layers
#define L1 0
#define L2 1
#define L3 2

// Momentary switch to layer
#define MO_L3 MO(L3)
#define MO_L4 MO(L4)
#define MO_L5 MO(L5)
// Momentary switch to layer - One Shot Layer
#define OSL_L2 OSL(L2)
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)
#define OSL_L5 OSL(L5)
//Toggle layers
#define TO_L1 TO(L1)
#define TO_L2 TO(L2)
#define TO_L3 TO(L3)
//L3 on hold, . on tap
#define L3_DOT LT(L3, KC_DOT)

//L3 on hold, Space on tap
#define L3_SPC LT(L3, KC_SPACE)

// Shift + Colon → Semicolon
const key_override_t shift_colon_to_semicolon =
    ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);

// Shift + Slash → Equal
const key_override_t shift_slash_to_equal =
    ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_EQL);

// Shift + Minus → Plus
const key_override_t shift_minus_to_plus =
    ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_PLUS);

// Register all overrides
const key_override_t *key_overrides[] = {
    &shift_colon_to_semicolon,
    &shift_slash_to_equal,
    &shift_minus_to_plus,
};

const uint16_t PROGMEM combo5[] = {KC_4, KC_1, COMBO_END};
const uint16_t PROGMEM combo5_1[] = {KC_3, KC_2, COMBO_END};
const uint16_t PROGMEM combo6[] = {KC_4, KC_2, COMBO_END};
const uint16_t PROGMEM combo6_1[] = {KC_3, KC_2, KC_1, COMBO_END};
const uint16_t PROGMEM combo7[] = {KC_4, KC_3, COMBO_END};
const uint16_t PROGMEM combo7_1[] = {KC_4, KC_2, KC_1, COMBO_END};
const uint16_t PROGMEM combo8[] = {KC_4, KC_3, KC_1, COMBO_END};
const uint16_t PROGMEM combo9[] = {KC_4, KC_3, KC_2, COMBO_END};
const uint16_t PROGMEM combo_boot[] = {KC_4, KC_3, KC_2, KC_1, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo5, KC_5),
    COMBO(combo5_1, KC_5),
    COMBO(combo6, KC_6),
    COMBO(combo6_1, KC_6),
    COMBO(combo7, KC_7),
    COMBO(combo7_1, KC_7),
    COMBO(combo8, KC_8),
    COMBO(combo9, KC_9),
    COMBO(combo_boot, QK_BOOT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L1] = LAYOUT_split_3x6_3(

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSPC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_MINS, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       O_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  O_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,  OSL_L2,  L3_SPC,      G_ENT,  OSL_L2, KC_LCTL
                                      //`--------------------------'  `--------------------------'

  ),

  [L2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  KC_EQL, XXXXXXX,   KC_AT, KC_HASH, KC_TILD,                      KC_QUES, KC_EXLM, KC_PIPE,  KC_AND, KC_PLUS, WEUR_AA,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_ASTR, KC_LBRC,   KC_PO,   KC_PC, KC_RBRC,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, WEUR_OE, WEUR_AE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC, KC_BSLS,  KC_DEL, KC_PERC, XXXXXXX,  KC_GRV,                       KC_HAT, KC_RCBR, KC_LCBR,  KC_DLR, _______, KC_COLN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, KC_UNDS,    XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [L3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_0,    KC_4,    KC_3,    KC_2,    KC_1,                      MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX, KC_RGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, MS_BTN4, MS_BTN1, MS_BTN3, MS_BTN2, MS_BTN5,                      MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT, XXXXXXX, KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_F10,   KC_F4,   KC_F3,   KC_F2,   KC_F1,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  KC_SPC,     KC_ENT, _______, _______
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
        default:
            rgblight_disable();
            break;
    }
    return state;
}
