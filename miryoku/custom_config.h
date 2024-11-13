// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_SOFLE)

#define XXX &none

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_SMT(LSHFT, F),    &kp G,             &kp H,             U_SMT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX                 XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  XXX \
K38  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  K39 \
          XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define K38 &kp LSFT
#define K39 &kp RSFT

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 53 54
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 55 56

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_SOFLE
