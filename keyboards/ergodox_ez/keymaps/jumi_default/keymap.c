#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_japanese.h"

// Fillers to make layering clearer
#define KCRDP_TAB LALT(KC_PGUP)
#define KCRDP_WIN LALT(KC_HOME)
#define KCRDP_PSCR LALT(LCTL(KC_PPLS))
#define KCRDP_BRK LALT(LCTL(KC_BRK))

enum layers {
    L_COMMON = 0,
    L_WIN,
    L_MAC,
    L_QWERTY,
    L_FUNC,
    L_MAC_FN,
    L_NAV,
    L_CONF,
};

enum custom_keycodes {
    //--layers--
    // os(default layer)
    OS_TGL = SAFE_RANGE,
    DEF_IME,
    W_IMEOFF,
    W_IMEON,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L_COMMON] = LAYOUT_ergodox_pretty(
    // left hand
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       _______,        MO(L_CONF),    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,    _______,
    KC_TAB,     _______,    _______,    _______,    _______,    _______,    _______,        KC_UP,      _______,    _______,    _______,    _______,    _______,    _______,
    MO(L_FUNC), _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    KC_LSFT,    _______,    _______,    _______,    _______,    _______,    KC_DEL,         KC_DOWN,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        KC_BSPC,    _______,    _______,    _______,    _______,

                                                                _______,    _______,        KC_LEFT,    KC_RGHT,
                                                                            _______,        _______,
                                                    KC_SPC,     _______,    _______,        MO(L_FUNC), _______,     KC_ENT
),

[L_WIN] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    MEH_T(KC_F2),   _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_F7,      KC_LGUI,    KC_LALT,    KC_LCTL,                                                        _______,    _______,    _______,    _______,    _______,

                                                                KC_APP,     KC_PSCR,        _______,    _______,
                                                                            KC_BRK,         _______,
                                                    _______,    W_IMEOFF,   DEF_IME,        _______,    W_IMEON,    _______
),

[L_MAC] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    MO(L_MAC_FN), KC_F7,    KC_LCTL,    KC_LALT,    KC_LGUI,                                                        _______,    _______,    _______,    _______,    _______,

                                                                KC_APP,     _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    KC_LNG2,    _______,        _______,    KC_LNG1,    _______
),

[L_QWERTY] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    KC_SLSH,
    _______,    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       _______,        _______,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
    _______,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_RBRC,
    _______,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       _______,        _______,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_QUOT,    KC_BSLS,
    _______,    _______,    _______,    _______,    _______,                                _______,    KC_LBRC,    KC_EQL,     JP_YEN,    KC_INT1,

                                                                _______,    _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        _______,    _______,    _______
),

[L_FUNC] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      _______,    _______,        KC_PGUP,    _______,    _______,    KC_P7,      KC_P8,      KC_P9,      KC_PSLS,
    _______,    KC_F5,      KC_F6,      KC_F7,      KC_F8,      _______,                                _______,    _______,    KC_P4,      KC_P5,      KC_P6,      KC_PAST,
    _______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,    _______,        KC_PGDN,    _______,    _______,    KC_P1,      KC_P2,      KC_P3,      KC_PMNS,
    _______,    _______,    _______,    _______,    _______,                                                        _______,    KC_P0,      _______,    KC_PDOT,    KC_PPLS,

                                                                _______,    _______,        KC_HOME,    KC_END,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        _______,    _______,    _______
),

[L_MAC_FN] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_BRID,    KC_BRIU,    KC_MCTL,    KC_LPAD,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    KC_MPRV,    KC_MPLY,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_MNXT,    KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        _______,    _______,    _______,    _______,    _______,

                                                                _______,    _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        _______,    _______,    _______
),

[L_NAV] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    KC_UP,      _______,    _______,    _______,    _______,        KC_WH_U,    _______,    _______,    KC_MS_U,    _______,    _______,    _______,
    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,    _______,                                _______,    KC_MS_L,    KC_MS_D,    KC_MS_R,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        KC_WH_D,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        KC_MS_BTN2, _______,    _______,    _______,    _______,

                                                                _______,    _______,        KC_WH_L,    KC_WH_R,
                                                                            _______,        TO(L_QWERTY),
                                                    KC_MS_BTN1, KC_MS_BTN2, _______,        _______,    KC_MS_BTN1, KC_MS_BTN2
),
[L_CONF] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    QK_BOOT,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        _______,    _______,    _______,    _______,    _______,

                                                                _______,    _______,        OS_TGL,     _______,
                                                                            _______,        TO(L_QWERTY),
                                                    _______,    _______,    _______,        TO(L_NAV),  _______,    TO(L_FUNC)
)
};

void persistant_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
};

void toggle_default_layer(void){
    switch(biton32(default_layer_state)) {
        case L_WIN:
            persistant_default_layer_set(1UL<<L_MAC);
            layer_move(L_QWERTY);
            break;
        case L_MAC:
            persistant_default_layer_set(1UL<<L_WIN);
            layer_move(L_QWERTY);
            break;
        default:
            // none
            break;
    }
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DEF_IME:
            if (record->event.pressed) {
                register_code (KC_LALT);
                register_code (KC_GRAVE);
            }
            else
            {
                unregister_code (KC_GRAVE);
                unregister_code (KC_LALT);
            }
            return false;
            break;
        case W_IMEOFF:
            if (record->event.pressed) {
                register_code (JP_MHEN);
                register_code (KC_LNG2);    // 英語キーボードの場合、VK26を無変換にremap(PowerToysなどを使用)
            }
            else
            {
                unregister_code (KC_LNG2);
                unregister_code (JP_MHEN);
            }
            return false;
            break;
        case W_IMEON:
            if (record->event.pressed) {
                register_code (JP_HENK);
                register_code (KC_LNG1);    // 英語キーボードの場合、VK22を変換にremap(PowerToysなどを使用)
            }
            else
            {
                unregister_code (KC_LNG1);
                unregister_code (JP_HENK);
            }
            return false;
            break;
        //--layers--
        //os(default layer)
        case OS_TGL:
            if (record->event.pressed) {
                toggle_default_layer();
            }
            return false;
            break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    persistant_default_layer_set(1UL<<L_WIN);
    layer_move(L_QWERTY);
};

layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch(biton32(default_layer_state)) {
        case L_WIN:
            ergodox_right_led_1_on();
            break;
        case L_MAC:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

    if (layer_state_cmp(state, L_FUNC)) {
        ergodox_right_led_2_on();
    }
    if (layer_state_cmp(state, L_NAV)) {
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
    }
    if (layer_state_cmp(state, L_CONF)) {
        ergodox_led_all_on();
    }

    return state;
}
