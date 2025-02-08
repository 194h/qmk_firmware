#include QMK_KEYBOARD_H

//Some of the default aliases make no sense
#define KC_AND KC_AMPERSAND
#define KC_PO KC_LEFT_PAREN
#define KC_PC KC_RIGHT_PAREN
#define KC_HAT KC_CIRCUMFLEX

//CTRL on hold, D on tap
#define CTL_D LCTL_T(KC_D)
//CTRL on hold, K on tap
#define CTL_K RCTL_T(KC_K)
//SHIFT on hold, F on tap
#define SFT_F LSFT_T(KC_F)
//SHIFT on hold, J on tap
#define SFT_J RSFT_T(KC_J)
//ALT on hold, S on tap
#define ALT_S LALT_T(KC_S)
//ALT on hold, L on tap
#define ALT_L LALT_T(KC_L)
//LGUI on hold, A on tap
#define GUI_A LGUI_T(KC_A)
//RGUI on hold, ; on tap
#define GUI_SCL RGUI_T(KC_SCLN)

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
#define LT5_G LT(L5, KC_G)
#define LT5_H LT(L5, KC_H)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L1] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
	KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_EQL,
	KC_BSPC,      GUI_A,        ALT_S,        CTL_D,        SFT_F,        LT5_G,                                    LT5_H,        SFT_J,        CTL_K,        ALT_L,        GUI_SCL,      KC_QUOT,
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
	XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_AT,        XXXXXXX,      KC_TILD,                                  KC_QUES,      KC_EXLM,      KC_PIPE,      KC_AND,       XXXXXXX,      _______,
	_______,      KC_ASTR,      KC_LBRC,      KC_PO,        KC_PC,        KC_RBRC,                                  KC_HAT,       KC_RCBR,      KC_LCBR,      KC_DLR,       XXXXXXX,      _______,
	_______,      XXXXXXX,      KC_BSLS,      KC_PERC,      XXXXXXX,      KC_GRV,                                   XXXXXXX,      KC_HASH,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_COLN,      KC_UNDS,      XXXXXXX,      KC_COLN,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
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
	XXXXXXX,      KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                     KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         XXXXXXX,
	_______,      KC_5,         KC_4,         KC_3,         KC_2,         KC_0,                                     KC_0,         KC_2,         KC_3,         KC_4,         KC_5,         XXXXXXX,
        XXXXXXX,      KC_0,         KC_9,         KC_8,         KC_7,         XXXXXXX,                                  XXXXXXX,      KC_7,         KC_8,         KC_9,         KC_0,         XXXXXXX,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_6,         KC_1,         XXXXXXX,      XXXXXXX,      KC_1,         KC_6,         XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  ),

};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_F:
            return 150;
        case SFT_J:
            return 150;
        case LT5_G:
            return 150;
        case LT5_H:
            return 150;
        default:
            return TAPPING_TERM;  // Default fallback
    }
}
