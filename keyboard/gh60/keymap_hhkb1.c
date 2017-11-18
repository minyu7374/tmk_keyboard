#include "keymap_common.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Del  |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  :|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |    |Gui |Alt |      Space             |    |Alt |Gui |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,DEL,      \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN0,       \
        NO,  LALT,LGUI,          SPC,                     NO,  RGUI,RALT,NO),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Bspc |
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |Stop |Menu|   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,BSPC,      \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,     PENT,      \
        TRNS,FN1, FN2, FN3, FN4, FN5, PPLS,PMNS,END, PGDN,DOWN,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,MSTP,APP,TRNS),

    /* 2: mouse layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |McU |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Bspc|
     * |-----------------------------------------------------------|
     * |Contl|McL|McD |McR|   |   |McL|McD|McU|McR|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |Ac0|Ac1|Ac2|    |Mb3|Mb2|Mb1|Mb4|Mb5|  |Shift |   |
     * |-----------------------------------------------------------'
     * |    |Gui |Alt  |Mb1                     |    |RGui|Menu|   |
     * `-----------------------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     * */
    KEYMAP_HHKB(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
        TAB, TRNS,MS_U,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,TRNS,BSPC,      \
        LCTL,MS_L,MS_D,MS_R,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,     PENT, \
        LSFT,TRNS,ACL0,ACL1,ACL2,BTN3,BTN2,BTN1,BTN4,BTN5,TRNS,RSFT,TRNS, \
        TRNS,LGUI,LALT,          BTN1,               TRNS,RGUI,APP,TRNS),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2),
};
