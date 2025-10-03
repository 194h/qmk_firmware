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
//LCTL on hold, ESC on tap
#define C_ESC LCTL_T(KC_ESC)
//LGUI on hold, Tab on tap
#define G_TAB LGUI_T(KC_TAB)
//RGUI on hold, Equal on tap
#define G_EQL RGUI_T(KC_EQL)

//Layers
#define L1 0
#define L2 1
#define L3 2

// Momentary switch to layer
#define MO_L2 MO(L2)
#define MO_L3 MO(L3)
// Momentary switch to layer - One Shot Layer
#define O_L2 OSL(L2)
#define O_L3 OSL(L3)
//L3 on hold, X on tap
#define L3_X LT(L3, KC_X)
//L3 on hold, . on tap
#define L3_DOT LT(L3, KC_DOT)

enum custom_keycodes {
    SS_CBRS = SAFE_RANGE,
    SS_BRCS,
    SS_POPC,
    SS_QTS,
    SS_DQTS,
    SS_SPC4,
    SS_CMNT,
    SS_ENTV,

    NEW_SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SS_CBRS:
            if (record->event.pressed) {
                SEND_STRING("{}" SS_TAP(X_LEFT));
            }
            return false;
        case SS_BRCS:
            if (record->event.pressed) {
                SEND_STRING("[]" SS_TAP(X_LEFT));
            }
            return false;
        case SS_POPC:
            if (record->event.pressed) {
                SEND_STRING("()" SS_TAP(X_LEFT));
            }
            return false;
        case SS_QTS:
            if (record->event.pressed) {
                SEND_STRING("''" SS_TAP(X_LEFT));
            }
            return false;
        case SS_DQTS:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT("''") SS_TAP(X_LEFT));
            }
            return false;
        case SS_SPC4:
            if (record->event.pressed) {
                SEND_STRING("    ");
            }
            return false;
        case SS_CMNT:
            if (record->event.pressed) {
                SEND_STRING("\e^i#\e");
            }
            return false;
        case SS_ENTV:
            if (record->event.pressed) {
                SEND_STRING("\eo\ek");
            }
            return false;

    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L1] = LAYOUT(
	MS_BTN1,      MS_BTN3,      KC_CUT,       KC_COPY,      KC_PASTE,     MS_ACL0,                                  MS_LEFT,      MS_DOWN,      MS_UP,        MS_RGHT,      MS_BTN3,      MS_BTN2,
	KC_LGUI,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_RGUI,
	KC_BSPC,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                                     KC_H,         KC_J,         KC_K,         KC_L,         KC_MINS,      KC_QUOT,
	O_LSFT,       KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      O_RSFT,
	KC_ESC,       KC_LCTL,      KC_RALT,      KC_LALT,      O_L3,         O_L2,         KC_SPC,       KC_ENT,       O_L2,         O_L3,         KC_LALT,      KC_EQL,       KC_RCTL,      KC_COLN
  ),

  [L2] = LAYOUT(
	XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
    KC_TAB,       SS_QTS,       SS_DQTS,      KC_AT,        KC_HASH,      KC_TILD,                                  KC_QUES,      KC_EXLM,      KC_PIPE,      KC_AND,       KC_PLUS,      NO_AA,
    _______,      KC_ASTR,      KC_LBRC,      KC_PO,        KC_PC,        KC_RBRC,                                  KC_HAT,       KC_RCBR,      KC_LCBR,      KC_DLR,       NO_OE,        NO_AE,
    _______,      XXXXXXX,      KC_BSLS,      KC_PERC,      SS_CMNT,      KC_GRV,                                   NO_EN,        NO_EM,        KC_LT,        KC_GT,        KC_TAB,       _______,
	XXXXXXX,      XXXXXXX,      SS_BRCS,      SS_POPC,      XXXXXXX,      XXXXXXX,      KC_UNDS,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,      KC_SCLN
  ),

  [L3] = LAYOUT(
	MS_BTN4,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                  MS_WHLL,      MS_WHLD,      MS_WHLU,      MS_WHLR,      XXXXXXX,      MS_BTN5,
	_______,      KC_0,         KC_9,         KC_8,         KC_7,         KC_6,                                     KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       XXXXXXX,      KC_RGUI,
	_______,      KC_5,         KC_4,         KC_3,         KC_2,         KC_1,                                     KC_LEFT,      KC_DOWN,      KC_UP,        KC_RIGHT,     XXXXXXX,      XXXXXXX,
	KC_LSFT,      KC_F10,       KC_F9,        KC_F8,        KC_F7,        KC_F6,                                    KC_F11,       KC_F12,       KC_COMM,      KC_DOT,       _______,      KC_RSFT,
	QK_BOOT,      KC_F5,        KC_F4,        KC_F3,        KC_F2,        KC_F1,        KC_1,         XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
  )

};
