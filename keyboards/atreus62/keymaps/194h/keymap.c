#include QMK_KEYBOARD_H

//Some of the default aliases make no sense
#define KC_AND KC_AMPERSAND
#define KC_PO KC_LEFT_PAREN
#define KC_PC KC_RIGHT_PAREN
#define KC_HAT KC_CIRCUMFLEX

//ONE SHOT MODS
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)

//CTRL on hold, ' on tap
#define CTL_QUOT RCTL_T(KC_QUOT)
//ALT on hold, , on tap
#define ALT_COM LALT_T(KC_COMM)
//RALT on hold, / on tap
#define RALT_SLSH RALT_T(KC_SLSH)
//RGUI on hold, Tab on tap
#define GUI_TAB RGUI_T(KC_TAB)

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
	GUI_TAB,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_RGUI,
	KC_BSPC,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                                     KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      CTL_QUOT,
	OSM_LSFT,     KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         ALT_COM,      KC_DOT,       RALT_SLSH,    OSM_RSFT,
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
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       XXXXXXX,      QK_BOOT,
	_______,      KC_5,         KC_4,         KC_3,         KC_2,         KC_1,                                     KC_LEFT,      KC_DOWN,      KC_UP,        KC_RIGHT,     XXXXXXX,      XXXXXXX,
        KC_CAPS,      KC_0,         KC_9,         KC_8,         KC_7,         KC_6,                                     KC_RGUI,      KC_RGUI,      KC_RGUI,      KC_RGUI,      XXXXXXX,      XXXXXXX,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_6,         KC_1,         XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

};
