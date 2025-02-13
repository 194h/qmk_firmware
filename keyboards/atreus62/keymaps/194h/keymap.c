#include QMK_KEYBOARD_H

//Some of the default aliases make no sense
#define KC_AND KC_AMPERSAND
#define KC_PO KC_LEFT_PAREN
#define KC_PC KC_RIGHT_PAREN
#define KC_HAT KC_CIRCUMFLEX

//ONE SHOT MODS
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)

//RALT on hold, ' on tap
#define RALT_QUOT RALT_T(KC_QUOT)
//ALT on hold, , on tap
#define ALT_COM LALT_T(KC_COMM)
//RCTL on hold, / on tap
#define CTL_SLSH RCTL_T(KC_SLSH)
//RGUI on hold, - on tap
#define GUI_MIN LGUI_T(KC_MINS)
//LGUI on hold, Tab on tap
#define GUI_TAB LGUI_T(KC_TAB)
//LCTL on hold, Z on tap
#define CTL_Z LCTL_T(KC_Z)

//Layers
#define L1 0
#define L2 1
#define L3 2
#define L4 3

// Momentary switch to layer
#define MO_L2 MO(L2)
#define MO_L4 MO(L4)
// Momentary switch to layer - One Shot Layer
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L1] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	GUI_TAB,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         GUI_MIN,
	KC_BSPC,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                                     KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      RALT_QUOT,
	OSM_LSFT,     CTL_Z,        KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         ALT_COM,      KC_DOT,       CTL_SLSH,     OSM_RSFT,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      MO_L4,        OSL_L3,       KC_SPC,       KC_ENT,       OSL_L3,       OSL_L4,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
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
	XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_AT,        XXXXXXX,      KC_TILD,                                  KC_QUES,      KC_EXLM,      KC_PIPE,      KC_AND,       XXXXXXX,      _______,
	_______,      KC_ASTR,      KC_LBRC,      KC_PO,        KC_PC,        KC_RBRC,                                  KC_HAT,       KC_RCBR,      KC_LCBR,      KC_DLR,       XXXXXXX,      _______,
	_______,      XXXXXXX,      KC_BSLS,      KC_PERC,      XXXXXXX,      KC_GRV,                                   KC_HASH,      KC_MINS,      KC_EQL,       KC_PLUS,      XXXXXXX,      _______,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_ESC,       KC_UNDS,      XXXXXXX,      KC_COLN,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

  [L4] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	KC_LGUI,      KC_0,         KC_9,         KC_8,         KC_7,         KC_6,                                     KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       KC_F12,       KC_RGUI,
	_______,      KC_5,         KC_4,         KC_3,         KC_2,         KC_1,                                     KC_LEFT,      KC_DOWN,      KC_UP,        KC_RIGHT,     KC_F11,       XXXXXXX,
	KC_CAPS,      KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                                    KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       XXXXXXX,
	XXXXXXX,      QK_BOOT,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_6,         KC_1,         XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

};
