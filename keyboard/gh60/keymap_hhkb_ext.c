#include "keymap_common.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |LCtrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  :|  '|Return  |
     * |-----------------------------------------------------------|
     * |LShift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|RShift|Del |
     * |-----------------------------------------------------------|
     * |Fn0 |LAlt|LGui|      Space             |LGui|RAlt|RCtl|Fn0 |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSLS, GRV,
        TAB, Q, W, E, R, T, Y, U, I, O, P, LBRC, RBRC, BSPC,
        LCTL, A, S, D, F, G, H, J, K, L, SCLN, QUOT, ENT,
        LSFT, Z, X, C, V, B, N, M, COMM, DOT, SLSH, RSFT, DEL,
        FN0, LALT, LGUI, SPC, RGUI, RALT, RCTL, FN0),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Slep|F1|F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Bspc|
     * |-----------------------------------------------------------|
     * |Caps |Nxt|Prv|Stp|Ply|Sel|   |   |Psc|Slk|Pus|Up |   |Del  |
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |Fn1|Fn2|Fn3|   |   |  +|  -|End|PgD|Dow|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |Wake |Menu|   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        SLEP, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, INS, BSPC,
        CAPS, MNXT, MPRV, MSTP, MPLY, MSEL, TRNS, TRNS, PSCR, SLCK, PAUS, UP, TRNS, DEL,
        TRNS, VOLD, VOLU, MUTE, EJCT, TRNS, PAST, PSLS, HOME, PGUP, LEFT, RGHT, PENT,
        TRNS, FN1, FN2, FN3, TRNS, TRNS, PPLS, PMNS, END, PGDN, DOWN, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, WAKE, APP, TRNS),

    /* 2: mouse layer
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
     * |-----------------------------------------------------------|
     * |     |   |McU|   |Ac0|   |Ac2|Ac1|Ac0|Ac1|Ac2|McU|   |     |
     * |-----------------------------------------------------------|
     * |      |McL|McD|McR|Ac1|   |MwL|MwD|MwU|MwR|McL|McR|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |Ac2|Mb3|Mb2|Mb1|Mb4|Mb5|McD|      |   |
     * |-----------------------------------------------------------'
     * |    |    |     |Mb1                     |    |    |Menu|   |
     * `-----------------------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     * */
    KEYMAP_HHKB(
        TRNS, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, TRNS, TRNS,
        TRNS, TRNS, MS_U, TRNS, ACL0, TRNS, ACL2, ACL1, ACL0, ACL1, ACL2, MS_U, TRNS, TRNS,
        TRNS, MS_L, MS_D, MS_R, ACL1, TRNS, WH_L, WH_D, WH_U, WH_R, MS_L, MS_R, TRNS,
        TRNS, TRNS, TRNS, TRNS, ACL2, BTN3, BTN2, BTN1, BTN4, BTN5, MS_D, TRNS, TRNS,
        TRNS, TRNS, TRNS, BTN1, TRNS, TRNS, APP, TRNS),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2),
};
