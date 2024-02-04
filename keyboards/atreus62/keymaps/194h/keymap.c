#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"
#include "sendstring_norwegian.h"

//Fix norwegian key names, and add some symbols
//Change names
#define NO_DQT NO_DQUO
#define NO_AO NO_ARNG
#define NO_OE NO_OSTR
#define NO_AND NO_AMPR
#define NO_PO NO_LPRN
#define NO_PC NO_RPRN
#define NO_HAT NO_CIRC
#define NO_GT NO_LABK
#define NO_LT NO_RABK
//Add symbols
#define  NO_EN    RALT(NO_MINS)   //  –
#define  NO_EM    LSFT(RALT(NO_MINS))  //  —

//One Shot Modifier
#define OSM_LCTL OSM(MOD_LCTL)
#define OSM_LALT OSM(MOD_LALT)
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_LGUI OSM(MOD_LGUI)
#define OSM_RCTL OSM(MOD_RCTL)
#define OSM_RALT OSM(MOD_RALT)
#define OSM_RSFT OSM(MOD_RSFT)
#define OSM_RGUI OSM(MOD_RGUI)

//CTRL on hold, ESC on tap
#define CTL_ESC CTL_T(KC_ESC)
//RALT on hold, DEL on tap
#define RALT_DEL RALT_T(KC_DEL)

//Layers
#define L1 0
#define L2 1
#define L3 2
#define L4 3
#define L5 4

// Momentary switch to layer
#define MO_L2 MO(L2)
#define MO_L4 MO(L4)
#define MO_L5 MO(L5)
// Momentary switch to layer - One Shot Layer
#define OSL_L2 OSL(L2)
#define OSL_L3 OSL(L3)
#define OSL_L4 OSL(L4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L1] = LAYOUT(
	KC_LGUI,       KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                     KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         KC_RGUI,
	KC_TAB,        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         NO_DQT,
	KC_BSPC,       KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                                     KC_H,         KC_J,         KC_K,         KC_L,         NO_SLSH,      NO_QUOT,
	OSM_LSFT,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         KC_COMM,      KC_DOT,       NO_MINS,      OSM_RSFT,
	CTL_ESC,       MO_L5,        RALT_DEL,     OSM_LALT,     MO_L4,        OSL_L3,       KC_SPC,       KC_ENT,       OSL_L3,       MO_L4,        NO_SCLN,      NO_COLN,      NO_PLUS,      KC_RCTL
  ),

  [L2] = LAYOUT(
	_______,       _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,       _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      NO_AO,
	_______,       _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      NO_OE,        NO_AE,
	_______,       _______,      _______,      _______,      _______,      _______,                                  _______,      _______,      _______,      _______,      _______,      _______,
	_______,       _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______
  ),

  [L3] = LAYOUT(
	XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	XXXXXXX,       NO_QUOT,      NO_DQT,       NO_AT,        NO_EQL,       NO_TILD,                                  NO_QUES,      NO_EXLM,      NO_PIPE,      NO_AND,       NO_HASH,      NO_DQT,
	_______,       NO_ASTR,      NO_LBRC,      NO_PO,        NO_PC,        NO_RBRC,                                  NO_HAT,       NO_RCBR,      NO_LCBR,      NO_DLR,       NO_BSLS,      NO_QUOT,
	XXXXXXX,       NO_SECT,      XXXXXXX,      NO_PERC,      NO_ACUT,      NO_GRV,                                   NO_EN,        NO_EM,        NO_LT,        NO_GT,        NO_UNDS,      XXXXXXX,
	XXXXXXX,       _______,      _______,      _______,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,      _______,      _______,      XXXXXXX
  ),

  [L4] = LAYOUT(
	KC_ESC,        KC_BTN1,      KC_BTN2,      KC_BTN3,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	XXXXXXX,       XXXXXXX,      KC_WBAK,      XXXXXXX,      KC_WREF,      KC_WFWD,                                  KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       XXXXXXX,      XXXXXXX,
	_______,       KC_APP,       KC_MS_L,      KC_MS_D,      KC_MS_U,      KC_MS_R,                                  KC_LEFT,      KC_DOWN,      KC_UP,        KC_RIGHT,     XXXXXXX,      XXXXXXX,
    XXXXXXX,       XXXXXXX,      KC_WH_L,      KC_WH_U,      KC_WH_D,      KC_WH_R,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
    OSM_LCTL,      _______,      _______,      _______,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      OSM_RCTL
  ),

  [L5] = LAYOUT(
	XXXXXXX,       TO(L1),       TO(L2),       TO(L3),       TO(L4),       XXXXXXX,                                  KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,
	XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      QK_RBT,       XXXXXXX,                                  KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,       KC_F12,
	XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  KC_F13,       KC_F14,       KC_F15,       KC_F16,       KC_F17,       KC_F18,
	XXXXXXX,       XXXXXXX,      XXXXXXX,      KC_CAPS,      XXXXXXX,      QK_BOOT,                                  KC_F19,       KC_F20,       KC_F21,       KC_F22,       KC_F23,       KC_F24,
	XXXXXXX,       _______,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  )

};
