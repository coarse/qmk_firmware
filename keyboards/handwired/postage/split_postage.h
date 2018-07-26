#ifndef SPLIT_POSTAGE_H
#define SPLIT_POSTAGE_H

#include "quantum.h"

#if KEYBOARD_handwired_split_postage_prototype
    #include "prototype.h"
#endif


// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT_kc( \
    L00, L01, L02, R00, R01, R02, \
    L10, L11, L12, R10, R11, R12, \
    L20, L21, L22, R20, R21, R22  \
    ) \
    LAYOUT( \
        KC_##L00, KC_##L01, KC_##L02, KC_##R00, KC_##R01, KC_##R02, \
        KC_##L10, KC_##L11, KC_##L12, KC_##R10, KC_##R11, KC_##R12, \
        KC_##L20, KC_##L21, KC_##L22, KC_##R20, KC_##R21, KC_##R22 \
    )

#define LAYOUT_kc_ortho_4x12 LAYOUT_kc

#endif
