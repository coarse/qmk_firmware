#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#define DISABLE_JTAG // The keyboard uses PF4 and PF7, which are used by JTAG.

#include "split_postage.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define LAYOUT( \
	L00, L01, L02, R00, R01, R02, \
	L10, L11, L12, R10, R11, R12, \
	L20, L21, L22, R20, R21, R22 \
	) \
	{ \
		{ L00, L01, L02 }, \
		{ L10, L11, L12 }, \
		{ L20, L21, L22 }, \
		{ R02, R01, R00 }, \
		{ R12, R11, R10 }, \
		{ R22, R21, R20 } \
	}
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT( \
	L00, L01, L02, R00, R01, R02, \
	L10, L11, L12, R10, R11, R12, \
	L20, L21, L22, R20, R21, R22 \
	) \
	{ \
		{ L00, L01, L02 }, \
		{ L10, L11, L12 }, \
		{ L20, L21, L22 }, \
		{ R00, R01, R02 }, \
		{ R10, R11, R12 }, \
		{ R20, R21, R22 } \
	}
#endif

#define LAYOUT_ortho_4x12 LAYOUT

#endif
