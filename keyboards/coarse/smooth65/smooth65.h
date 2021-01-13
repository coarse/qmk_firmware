#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e,      \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e,      \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3e,      \
    k40, k41, k42,      k44,      k46,      k48,      k4a, k4b, k4c, k4d, k4e, k4f \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, XXX, k1e, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, XXX }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, XXX, k3e, XXX }, \
    { k40, k41, k42, XXX, k44, XXX, k46, XXX, k48, XXX, k4a, k4b, k4c, k4d, k4e, k4f }, \
}

#define LAYOUT_ansi( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,      k0e, k0f, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e,      \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d,           \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3e,      \
    k40, k41, k42,                k46,                k4a, k4b, k4c, k4d, k4e, k4f \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, XXX, k0e, k0f }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, XXX, k1e, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, XXX, k2d, XXX, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, XXX, k3e, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4a, k4b, k4c, k4d, k4e, k4f }, \
}

#define LAYOUT_ansi_split_bs( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e,      \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d,           \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3e,      \
    k40, k41, k42,                k46,                k4a, k4b, k4c, k4d, k4e, k4f \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, XXX, k1e, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, XXX, k2d, XXX, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, XXX, k3e, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, k46, XXX, XXX, XXX, k4a, k4b, k4c, k4d, k4e, k4f }, \
}
