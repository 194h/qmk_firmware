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
#define O_LGUI OSM(MOD_LGUI)
#define O_RGUI OSM(MOD_RGUI)

//Layers
#define L1 0
#define L2 1

// Momentary switch to layer
#define M_L2 MO(L2)
// Momentary switch to layer - One Shot Layer
#define O_L2 OSL(L2)

enum custom_keycodes {
    SS_QTS = SAFE_RANGE,
    SS_DQTS,
    SS_CMNT,

    NEW_SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
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
        case SS_CMNT:
            if (record->event.pressed) {
                SEND_STRING("\e^i#\e");
            }
            return false;

    }
    return true;
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

  [L1] = LAYOUT(
	MS_BTN1,      KC_0,         KC_4,         KC_3,         KC_2,         KC_1,                                     MS_LEFT,      MS_DOWN,      MS_UP,        MS_RGHT,      MS_BTN3,      MS_BTN2,
	KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_SCLN,
	KC_BSPC,      KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                                     KC_H,         KC_J,         KC_K,         KC_L,         KC_MINS,      KC_QUOT,
	O_LSFT,       KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                     KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      O_RSFT,
	KC_ESC,       KC_LCTL,      KC_RALT,      KC_LALT,      O_LGUI,       O_L2,         KC_SPC,       KC_ENT,       O_L2,         O_RGUI,       KC_LALT,      KC_EQL,       KC_RCTL,      KC_COLN
  ),

  [L2] = LAYOUT(
	MS_BTN4,      KC_F10,       KC_F4,        KC_F3,        KC_F2,        KC_F1,                                    MS_WHLL,      MS_WHLD,      MS_WHLU,      MS_WHLR,      MS_ACL0,      MS_BTN5,
	_______,      SS_QTS,       SS_DQTS,      KC_AT,        KC_HASH,      KC_TILD,                                  KC_QUES,      KC_EXLM,      KC_PIPE,      KC_AND,       KC_PLUS,      WEUR_AA,
	_______,      KC_ASTR,      KC_LBRC,      KC_PO,        KC_PC,        KC_RBRC,                                  KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      WEUR_OE,      WEUR_AE,
	_______,      XXXXXXX,      KC_BSLS,      KC_PERC,      SS_CMNT,      KC_GRV,                                   KC_HAT,       KC_RCBR,      KC_LCBR,      KC_DLR,       _______,      _______,
	_______,      _______,      KC_CUT,       KC_COPY,      KC_PSTE,      XXXXXXX,      KC_UNDS,      XXXXXXX,      KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,       _______,      KC_SCLN
  )

};
