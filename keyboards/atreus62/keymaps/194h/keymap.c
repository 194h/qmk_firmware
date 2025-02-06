#include QMK_KEYBOARD_H

//Some of the default aliases make no sense
#define KC_AND KC_AMPERSAND
#define KC_PO KC_LEFT_PAREN
#define KC_PC KC_RIGHT_PAREN
#define KC_HAT KC_CIRCUMFLEX

//One Shot Modifier
#define OSM_LCTL OSM(MOD_LCTL)
#define OSM_LALT OSM(MOD_LALT)
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_LGUI OSM(MOD_LGUI)
#define OSM_RCTL OSM(MOD_RCTL)
#define OSM_RALT OSM(MOD_RALT)
#define OSM_RSFT OSM(MOD_RSFT)
#define OSM_RGUI OSM(MOD_RGUI)

//CTRL on hold, F on tap
#define CTL_F LCTL_T(KC_F)
//CTRL on hold, J on tap
#define CTL_J RCTL_T(KC_J)
//SHIFT on hold, D on tap
#define SFT_D LSFT_T(KC_D)
//SHIFT on hold, D on tap
#define SFT_K RSFT_T(KC_K)
//ALT on hold, A on tap
#define ALT_A LALT_T(KC_A)
//ALT on hold, ; on tap
#define ALT_SCL LALT_T(KC_SCLN)
//LGUI on hold, G on tap
#define GUI_G LGUI_T(KC_G)
//RGUI on hold, H on tap
#define GUI_H RGUI_T(KC_H)
//RALT on hold, Z on tap
#define RALT_Z RALT_T(KC_Z)

//Layers
#define L1 0
#define L2 1
#define L3 2
#define L4 3
#define L5 4

// Momentary switch to layer
#define MO_L2 MO(L2)
#define MO_L4 MO(L4)
// Momentary switch to layer - One Shot Layer
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)

// Layer tap
#define LT5_L LT(L5, KC_L)
#define LT5_S LT(L5, KC_S)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L1] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_EQL,
	KC_BSPC,      ALT_A,        LT5_S,        SFT_D,        CTL_F,        GUI_G,                                    GUI_H,        CTL_J,        SFT_K,        LT5_L,        ALT_SCL,      KC_QUOT,
	KC_ESC,       RALT_Z,       KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_MINS,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      MO_L4,        OSL_L3,       KC_SPC,       KC_ENT,       OSL_L3,       MO_L4,        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX 
  ),

  [L2] = LAYOUT(
	_______,      _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,      _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,      _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,      _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______
  ),

  [L3] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_AT,        KC_QUOT,      KC_TILD,                                  KC_QUES,      KC_EXLM,      KC_PIPE,      KC_AND,       XXXXXXX,      _______,
	_______,      KC_ASTR,      KC_LBRC,      KC_PO,        KC_PC,        KC_RBRC,                                  KC_HAT,       KC_RCBR,      KC_LCBR,      KC_DLR,       XXXXXXX,      _______,
	_______,      XXXXXXX,      KC_BSLS,      KC_PERC,      KC_DQT,       KC_GRV,                                   XXXXXXX,      KC_HASH,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_UNDS,      XXXXXXX,      KC_COLN,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

  [L4] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_BTN1,      KC_BTN2,      XXXXXXX,                                  KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       XXXXXXX,      QK_BOOT,
	_______,      XXXXXXX,      MS_LEFT,      MS_UP,        MS_DOWN,      MS_RGHT,                                  KC_LEFT,      KC_DOWN,      KC_UP,        KC_RIGHT,     XXXXXXX,      XXXXXXX,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_BTN3,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

  [L5] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_ESC,       XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	_______,      KC_4,         KC_3,         KC_2,         KC_1,         KC_0,                                     KC_0,         KC_1,         KC_2,         KC_3,         KC_4,         XXXXXXX,
        KC_9,         KC_8,         KC_7,         KC_6,         KC_5,         XXXXXXX,                                  XXXXXXX,      KC_5,         KC_6,         KC_7,         KC_8,         KC_9,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

};
