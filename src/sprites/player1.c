#include "player1.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2015
// Tile sp_player1_00: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_00[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xa3, 0xa2, 0x11, 0x00,
	0x00, 0x01, 0x53, 0xf3, 0x22, 0x22,
	0x00, 0x51, 0x53, 0xf3, 0x11, 0x11,
	0x00, 0x51, 0x53, 0xf3, 0x22, 0x22,
	0x00, 0x51, 0xf3, 0xf3, 0x11, 0x11,
	0x00, 0x00, 0xf3, 0xa2, 0x33, 0x22,
	0x00, 0x50, 0xb5, 0x3f, 0x22, 0x00,
	0x00, 0xb5, 0x3f, 0x3f, 0x2a, 0x00,
	0x00, 0x1d, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0x1d, 0x7a, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0xb5, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xa0, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0xae, 0x08, 0x0c, 0xaa, 0x00,
	0x00, 0xae, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00,
	0x00, 0x55, 0xaa, 0xff, 0x00, 0x00
};

// Tile sp_player1_01: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_01[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xf3, 0x00, 0x00, 0x00,
	0x00, 0x53, 0xf3, 0xa2, 0x00, 0x00,
	0x00, 0xf3, 0xf3, 0x08, 0x11, 0x00,
	0x00, 0xf3, 0xa6, 0x08, 0x22, 0x22,
	0x00, 0xf3, 0xa6, 0x08, 0x11, 0x11,
	0x00, 0x04, 0x0c, 0x00, 0x22, 0x22,
	0x00, 0x50, 0x49, 0x00, 0x11, 0x11,
	0x00, 0xb5, 0x3f, 0x2a, 0x33, 0x22,
	0x00, 0x3f, 0x1d, 0x2a, 0x22, 0x00,
	0x00, 0x3f, 0x0c, 0x3b, 0x00, 0x00,
	0x00, 0x3f, 0x2e, 0x0c, 0x00, 0x00,
	0x00, 0x3f, 0x3f, 0x2e, 0x00, 0x00,
	0x00, 0x3f, 0x3f, 0x2a, 0x00, 0x00,
	0x00, 0xc3, 0x6b, 0x82, 0x00, 0x00,
	0x00, 0xf0, 0xd2, 0xa0, 0x00, 0x00,
	0x00, 0xd0, 0xf0, 0xa0, 0x00, 0x00,
	0x00, 0x40, 0xf0, 0xa0, 0x00, 0x00,
	0x00, 0x40, 0xd0, 0xa0, 0x00, 0x00,
	0x00, 0x33, 0x04, 0x08, 0x00, 0x00,
	0x00, 0x33, 0x04, 0x08, 0x00, 0x00,
	0x11, 0x22, 0x00, 0x5d, 0xaa, 0x00,
	0x41, 0x82, 0x00, 0xff, 0xaa, 0x00,
	0x41, 0xc3, 0x00, 0x55, 0x00, 0x00
};

// Tile sp_player1_02: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_02[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xf3, 0x00, 0x00, 0x00,
	0x00, 0x53, 0xf3, 0xa2, 0x00, 0x00,
	0x00, 0xf3, 0xf3, 0x08, 0x00, 0x00,
	0x00, 0xf3, 0xa6, 0x08, 0x11, 0x00,
	0x00, 0xf3, 0xa6, 0x08, 0x22, 0x22,
	0x00, 0x04, 0x0c, 0x00, 0x11, 0x11,
	0x00, 0x50, 0x49, 0x00, 0x22, 0x22,
	0x00, 0xb5, 0x3f, 0x2a, 0x11, 0x11,
	0x00, 0x3f, 0x1d, 0x2a, 0x33, 0x22,
	0x00, 0x3f, 0x1d, 0x2a, 0x22, 0x00,
	0x00, 0x3f, 0x2e, 0x3b, 0x00, 0x00,
	0x00, 0x3f, 0x3f, 0x0c, 0x00, 0x00,
	0x00, 0xc3, 0x6b, 0x86, 0x00, 0x00,
	0x00, 0xf0, 0xd2, 0xa0, 0x00, 0x00,
	0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x11, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x41, 0xff, 0x00, 0x00, 0x00,
	0x00, 0x41, 0xff, 0xaa, 0x00, 0x00
};

// Tile sp_player1_03: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_03[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xf3, 0x00, 0x00, 0x00,
	0x00, 0x53, 0xf3, 0xa2, 0x00, 0x00,
	0x00, 0xf3, 0xf3, 0x08, 0x11, 0x00,
	0x00, 0xf3, 0xa6, 0x08, 0x22, 0x22,
	0x00, 0xf3, 0xa6, 0x08, 0x11, 0x11,
	0x00, 0x04, 0x0c, 0x00, 0x22, 0x22,
	0x00, 0x50, 0x49, 0x00, 0x11, 0x11,
	0x00, 0xb5, 0x3f, 0x2a, 0x33, 0x22,
	0x00, 0x3f, 0x1d, 0x2a, 0x22, 0x00,
	0x00, 0x3f, 0x0c, 0x3b, 0x00, 0x00,
	0x00, 0x3f, 0x2e, 0x0c, 0x00, 0x00,
	0x00, 0x3f, 0x3f, 0x2e, 0x00, 0x00,
	0x00, 0x3f, 0x3f, 0x2a, 0x00, 0x00,
	0x00, 0xc3, 0x6b, 0x82, 0x00, 0x00,
	0x00, 0xf0, 0xd2, 0xa0, 0x00, 0x00,
	0x00, 0xf0, 0xf0, 0x80, 0x00, 0x00,
	0x00, 0xf0, 0xe0, 0x80, 0x00, 0x00,
	0x00, 0xf0, 0xc0, 0x80, 0x00, 0x00,
	0x00, 0x0c, 0x11, 0x22, 0x00, 0x00,
	0x00, 0x0c, 0x11, 0x22, 0x00, 0x00,
	0x04, 0x08, 0x00, 0x63, 0x00, 0x00,
	0x55, 0xaa, 0x00, 0xc3, 0x82, 0x00,
	0x55, 0xff, 0x00, 0xc3, 0x82, 0x00
};

// Tile sp_player1_04: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_04[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf3, 0x02, 0x00,
	0x00, 0x00, 0x51, 0xf3, 0xa3, 0x00,
	0x00, 0x22, 0x04, 0xf3, 0xf3, 0x00,
	0x11, 0x11, 0x04, 0x59, 0xf3, 0x00,
	0x22, 0x22, 0x04, 0x59, 0xf3, 0x00,
	0x11, 0x11, 0x00, 0x0c, 0x08, 0x00,
	0x22, 0x22, 0x00, 0x86, 0xa0, 0x00,
	0x11, 0x33, 0x15, 0x3f, 0x7a, 0x00,
	0x00, 0x11, 0x15, 0x2e, 0x3f, 0x00,
	0x00, 0x00, 0x37, 0x0c, 0x3f, 0x00,
	0x00, 0x00, 0x0c, 0x1d, 0x3f, 0x00,
	0x00, 0x00, 0x1d, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x15, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x41, 0x97, 0xc3, 0x00,
	0x00, 0x00, 0x50, 0xe1, 0xf0, 0x00,
	0x00, 0x00, 0x40, 0xf0, 0xf0, 0x00,
	0x00, 0x00, 0x40, 0xd0, 0xf0, 0x00,
	0x00, 0x00, 0x40, 0xc0, 0xf0, 0x00,
	0x00, 0x00, 0x11, 0x22, 0x0c, 0x00,
	0x00, 0x00, 0x11, 0x22, 0x0c, 0x00,
	0x00, 0x00, 0x93, 0x00, 0x04, 0x08,
	0x00, 0x41, 0xc3, 0x00, 0x55, 0xaa,
	0x00, 0x41, 0xc3, 0x00, 0xff, 0xaa
};

// Tile sp_player1_05: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_05[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf3, 0x02, 0x00,
	0x00, 0x00, 0x51, 0xf3, 0xa3, 0x00,
	0x00, 0x00, 0x04, 0xf3, 0xf3, 0x00,
	0x00, 0x22, 0x04, 0x59, 0xf3, 0x00,
	0x11, 0x11, 0x04, 0x59, 0xf3, 0x00,
	0x22, 0x22, 0x00, 0x0c, 0x08, 0x00,
	0x11, 0x11, 0x00, 0x86, 0xa0, 0x00,
	0x22, 0x22, 0x15, 0x3f, 0x7a, 0x00,
	0x11, 0x33, 0x15, 0x2e, 0x3f, 0x00,
	0x00, 0x11, 0x15, 0x2e, 0x3f, 0x00,
	0x00, 0x00, 0x37, 0x1d, 0x3f, 0x00,
	0x00, 0x00, 0x0c, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x49, 0x97, 0xc3, 0x00,
	0x00, 0x00, 0x50, 0xe1, 0xf0, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x22, 0x00,
	0x00, 0x00, 0x00, 0xff, 0x82, 0x00,
	0x00, 0x00, 0x55, 0xff, 0x82, 0x00
};

// Tile sp_player1_06: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_06[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf3, 0x02, 0x00,
	0x00, 0x00, 0x51, 0xf3, 0xa3, 0x00,
	0x00, 0x22, 0x04, 0xf3, 0xf3, 0x00,
	0x11, 0x11, 0x04, 0x59, 0xf3, 0x00,
	0x22, 0x22, 0x04, 0x59, 0xf3, 0x00,
	0x11, 0x11, 0x00, 0x0c, 0x08, 0x00,
	0x22, 0x22, 0x00, 0x86, 0xa0, 0x00,
	0x11, 0x33, 0x15, 0x3f, 0x7a, 0x00,
	0x00, 0x11, 0x15, 0x2e, 0x3f, 0x00,
	0x00, 0x00, 0x37, 0x0c, 0x3f, 0x00,
	0x00, 0x00, 0x0c, 0x1d, 0x3f, 0x00,
	0x00, 0x00, 0x1d, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x15, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x41, 0x97, 0xc3, 0x00,
	0x00, 0x00, 0x50, 0xe1, 0xf0, 0x00,
	0x00, 0x00, 0x50, 0xf0, 0xe0, 0x00,
	0x00, 0x00, 0x50, 0xf0, 0x80, 0x00,
	0x00, 0x00, 0x50, 0xe0, 0x80, 0x00,
	0x00, 0x00, 0x04, 0x08, 0x33, 0x00,
	0x00, 0x00, 0x04, 0x08, 0x33, 0x00,
	0x00, 0x55, 0xae, 0x00, 0x11, 0x22,
	0x00, 0x55, 0xff, 0x00, 0x41, 0x82,
	0x00, 0x00, 0xaa, 0x00, 0xc3, 0x82
};

// Tile sp_player1_07: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_07[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xf3, 0x00, 0x00, 0x00,
	0x00, 0x53, 0xf3, 0xa2, 0x00, 0x00,
	0x00, 0xf3, 0xf3, 0xa2, 0x00, 0x00,
	0x00, 0xf3, 0xf3, 0x08, 0x00, 0x22,
	0x00, 0xf3, 0xf3, 0x08, 0x11, 0x11,
	0x00, 0x51, 0xf3, 0x00, 0x00, 0x22,
	0x00, 0xf0, 0x3f, 0x2a, 0x11, 0x11,
	0x50, 0x3f, 0x3f, 0x2a, 0x00, 0x22,
	0x04, 0x1d, 0x3f, 0x2a, 0x11, 0x33,
	0x04, 0x3f, 0x3f, 0x08, 0x11, 0x00,
	0x04, 0x3f, 0x3f, 0x08, 0x11, 0x00,
	0x04, 0x3f, 0x3f, 0x2e, 0x08, 0x00,
	0x04, 0x3f, 0x3f, 0x2a, 0x08, 0x00,
	0x00, 0xc3, 0x6b, 0xc2, 0x00, 0x00,
	0x00, 0xf0, 0xd2, 0xa0, 0x00, 0x00,
	0x00, 0xf0, 0xf0, 0xa0, 0x00, 0x00,
	0x00, 0xf0, 0xf0, 0xa0, 0x00, 0x00,
	0x00, 0xf0, 0x04, 0x08, 0x00, 0x00,
	0x00, 0x0c, 0x04, 0x08, 0x00, 0x00,
	0x55, 0x0c, 0x04, 0x5d, 0x00, 0x00,
	0x55, 0x0c, 0x55, 0xff, 0x00, 0x00,
	0x55, 0xff, 0x55, 0xff, 0x00, 0x00,
	0x00, 0xff, 0x55, 0xaa, 0x00, 0x00
};

// Tile sp_player1_08: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_08[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x53, 0xa2, 0x00, 0x00,
	0x00, 0x01, 0x53, 0xf3, 0x00, 0x00,
	0x00, 0x51, 0x53, 0xf3, 0x00, 0x00,
	0x00, 0x51, 0xf3, 0xf3, 0x00, 0x00,
	0x00, 0x51, 0xf3, 0xf3, 0x00, 0x00,
	0x00, 0x00, 0xf3, 0xa2, 0x22, 0x00,
	0x00, 0x50, 0xb5, 0x2a, 0x00, 0x00,
	0x00, 0xb5, 0x3f, 0x2a, 0x22, 0x00,
	0x00, 0x0c, 0x3f, 0x2e, 0x00, 0x00,
	0x00, 0x1d, 0x3f, 0x2e, 0x00, 0x00,
	0x00, 0x1d, 0x3f, 0x3f, 0x00, 0x00,
	0x04, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xa0, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0xae, 0x08, 0x0c, 0xaa, 0x00,
	0x00, 0xae, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00,
	0x00, 0x55, 0xaa, 0xff, 0x00, 0x00
};

// Tile sp_player1_09: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_09[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x53, 0xa2, 0x00, 0x00,
	0x00, 0x01, 0xa3, 0xf3, 0x00, 0x00,
	0x00, 0x73, 0xa3, 0xf3, 0x00, 0x00,
	0x11, 0x04, 0xf3, 0xf3, 0x00, 0x00,
	0x22, 0x26, 0xf3, 0xf3, 0x00, 0x00,
	0x11, 0x00, 0xf3, 0xa2, 0x00, 0x00,
	0x22, 0x72, 0xb5, 0x2a, 0x00, 0x00,
	0x11, 0xb5, 0x3f, 0x2a, 0x00, 0x00,
	0x00, 0x04, 0x3f, 0x2a, 0x00, 0x00,
	0x00, 0x1d, 0x3f, 0x2a, 0x00, 0x00,
	0x00, 0x1d, 0x3f, 0x2a, 0x00, 0x00,
	0x04, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xa0, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0xae, 0x08, 0x0c, 0xaa, 0x00,
	0x00, 0xae, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00,
	0x00, 0x55, 0xaa, 0xff, 0x00, 0x00
};

// Tile sp_player1_10: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_10[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xa3, 0xa2, 0x00, 0x00,
	0x00, 0x01, 0x53, 0xf3, 0x00, 0x00,
	0x00, 0x51, 0x53, 0xf3, 0x11, 0x00,
	0x00, 0x51, 0x53, 0xf3, 0x22, 0x22,
	0x00, 0x51, 0xf3, 0xf3, 0x11, 0x11,
	0x00, 0x00, 0xf3, 0xa2, 0x22, 0x22,
	0x00, 0xf0, 0xb5, 0x3f, 0x11, 0x11,
	0x00, 0x1d, 0x3f, 0x3f, 0x33, 0x22,
	0x00, 0x1d, 0x3f, 0x3f, 0x22, 0x00,
	0x00, 0x15, 0x7a, 0x3f, 0x2a, 0x00,
	0x00, 0x15, 0xb5, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0x0c, 0xaa, 0x00,
	0x00, 0x50, 0xa0, 0xff, 0xaa, 0x00,
	0x00, 0x04, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0xae, 0x08, 0xff, 0x00, 0x00,
	0x00, 0xae, 0x08, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xaa, 0x00, 0x00, 0x00,
	0x00, 0x55, 0xaa, 0x00, 0x00, 0x00
};

// Tile sp_player1_11: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_11[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x11, 0x00,
	0x00, 0x00, 0xa3, 0xa2, 0x22, 0x22,
	0x00, 0x01, 0x53, 0xf3, 0x11, 0x11,
	0x00, 0x51, 0x53, 0xf3, 0x22, 0x22,
	0x00, 0x51, 0x53, 0xf3, 0x11, 0x11,
	0x00, 0x51, 0xf3, 0xf3, 0x33, 0x22,
	0x00, 0x00, 0xf3, 0xa2, 0x22, 0x00,
	0x00, 0x50, 0xb5, 0x3f, 0x2a, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0xb5, 0x7a, 0x3f, 0x00, 0x00,
	0x00, 0x1d, 0xb5, 0x3f, 0x00, 0x00,
	0x00, 0x1d, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0xae, 0x58, 0xf0, 0x00, 0x00,
	0x00, 0xae, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0xff, 0xaa, 0x0c, 0x00, 0x00,
	0x00, 0x55, 0xaa, 0x0c, 0xaa, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xaa, 0x00,
	0x00, 0x00, 0x00, 0xff, 0xaa, 0x00,
	0x00, 0x00, 0x00, 0xff, 0x00, 0x00
};

// Tile sp_player1_12: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_12[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x11, 0x51, 0x53, 0x00, 0x00,
	0x00, 0x22, 0x22, 0x08, 0xa2, 0x00,
	0x11, 0x11, 0x04, 0x0c, 0xa2, 0x00,
	0x00, 0x22, 0x26, 0x0c, 0xa2, 0x00,
	0x11, 0x11, 0x04, 0x04, 0xa2, 0x00,
	0x00, 0x33, 0x26, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x72, 0x3f, 0x2a, 0x00,
	0x00, 0x50, 0x33, 0x3f, 0x3f, 0x00,
	0x00, 0x04, 0x33, 0x3f, 0x2e, 0x00,
	0x00, 0x04, 0x3b, 0xb5, 0x2e, 0x00,
	0x00, 0x04, 0x0c, 0x3f, 0x2e, 0x00,
	0x00, 0x00, 0x3b, 0x3f, 0x08, 0x00,
	0x00, 0x00, 0x3f, 0x3f, 0x2a, 0x00,
	0x00, 0x00, 0xc3, 0x6b, 0x82, 0x00,
	0x00, 0x00, 0xf0, 0xd2, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0xff, 0x55, 0xaa, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00
};

// Tile sp_player1_13: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_13[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x51, 0x53, 0x00, 0x00,
	0x00, 0x11, 0x00, 0x08, 0xa2, 0x00,
	0x00, 0x22, 0x26, 0x0c, 0xa2, 0x00,
	0x11, 0x11, 0x04, 0x0c, 0xa2, 0x00,
	0x00, 0x22, 0x26, 0x04, 0xa2, 0x00,
	0x11, 0x11, 0x04, 0x0c, 0x00, 0x00,
	0x00, 0x33, 0x72, 0x3f, 0x3f, 0x00,
	0x00, 0x00, 0x37, 0x3f, 0x2e, 0x00,
	0x00, 0x04, 0x33, 0x3f, 0x2e, 0x00,
	0x00, 0x04, 0x3b, 0xb5, 0x2e, 0x00,
	0x00, 0x04, 0x0c, 0x3f, 0x08, 0x00,
	0x00, 0x00, 0x3b, 0x3f, 0x2a, 0x00,
	0x00, 0x00, 0x3f, 0x3f, 0x2a, 0x00,
	0x00, 0x00, 0xc3, 0x6b, 0x82, 0x00,
	0x00, 0x00, 0xf0, 0xd2, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0x0c, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x55, 0xff, 0x04, 0x08, 0x00,
	0x00, 0x55, 0xff, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x55, 0xaa, 0x00,
	0x00, 0x00, 0x00, 0x55, 0xff, 0x00,
	0x00, 0x00, 0x00, 0x55, 0xff, 0x00
};

// Tile sp_player1_14: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_14[6 * 24] = {
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x11, 0x00, 0x00, 0x00, 0x00,
	0x22, 0x22, 0xa3, 0xa2, 0x00, 0x00,
	0x11, 0x11, 0x04, 0x51, 0x00, 0x00,
	0x22, 0x22, 0x0c, 0x59, 0x00, 0x00,
	0x11, 0x33, 0x0c, 0x59, 0x00, 0x00,
	0x00, 0x11, 0x08, 0x59, 0x00, 0x00,
	0x00, 0xb1, 0x26, 0x08, 0x00, 0x00,
	0x00, 0x1d, 0x37, 0x3f, 0x00, 0x00,
	0x00, 0x1d, 0x37, 0x3f, 0x00, 0x00,
	0x00, 0x0c, 0x1d, 0x3f, 0x2a, 0x00,
	0x00, 0x15, 0x72, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x08, 0x00,
	0x00, 0x15, 0x3f, 0x2e, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0x0c, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0x04, 0x08, 0xff, 0xaa, 0x00,
	0x00, 0x04, 0x08, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xaa, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xaa, 0x00, 0x00, 0x00
};

// Tile sp_player1_15: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_15[6 * 24] = {
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x11, 0x51, 0x53, 0x00, 0x00,
	0x22, 0x22, 0xa2, 0x08, 0xa2, 0x00,
	0x11, 0x11, 0xa6, 0x0c, 0xa2, 0x00,
	0x22, 0x33, 0xa6, 0x0c, 0xa2, 0x00,
	0x11, 0x22, 0xa6, 0x04, 0xa2, 0x00,
	0x00, 0x22, 0x04, 0x0c, 0x00, 0x00,
	0x00, 0x22, 0x15, 0x3f, 0x2a, 0x00,
	0x00, 0x08, 0x3f, 0x3f, 0x3f, 0x00,
	0x00, 0x26, 0x3f, 0x3f, 0x2e, 0x00,
	0x00, 0x04, 0x3f, 0x3f, 0x2e, 0x00,
	0x00, 0x00, 0x3f, 0x3f, 0x2e, 0x00,
	0x00, 0x00, 0x3f, 0x3f, 0x0c, 0x00,
	0x00, 0x00, 0x3f, 0x3f, 0x2a, 0x00,
	0x00, 0x00, 0xc3, 0x6b, 0x82, 0x00,
	0x00, 0x00, 0xf0, 0xd2, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0xff, 0x55, 0xaa, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00
};

// Tile sp_player1_16: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_16[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x51, 0x53, 0x00, 0x00,
	0x00, 0x00, 0xa2, 0x08, 0xa2, 0x00,
	0x00, 0x00, 0xa6, 0x0c, 0xa2, 0x00,
	0x00, 0x00, 0xa6, 0x0c, 0xa2, 0x00,
	0x00, 0x00, 0xa6, 0x04, 0xa2, 0x00,
	0x00, 0x00, 0x00, 0x26, 0x00, 0x00,
	0x00, 0x00, 0x11, 0x15, 0x2a, 0x00,
	0x00, 0x00, 0x2a, 0x37, 0x3f, 0x00,
	0x00, 0x00, 0x3b, 0x15, 0x2e, 0x00,
	0x00, 0x00, 0x08, 0x37, 0x2e, 0x00,
	0x00, 0x00, 0x19, 0x1d, 0x2e, 0x00,
	0x00, 0x00, 0x2e, 0x37, 0x2a, 0x08,
	0x00, 0x00, 0x3f, 0x3f, 0x2a, 0x00,
	0x00, 0x00, 0xc3, 0x6b, 0x82, 0x00,
	0x00, 0x00, 0xf0, 0xd2, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0xf0, 0xa0, 0x00,
	0x00, 0x00, 0xf0, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0x0c, 0x04, 0x08, 0x00,
	0x00, 0x00, 0xff, 0x55, 0xaa, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00,
	0x00, 0x55, 0xff, 0x55, 0xff, 0x00
};

// Tile sp_player1_17: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_17[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xa3, 0xa2, 0x00, 0x00,
	0x00, 0x51, 0x04, 0x51, 0x00, 0x00,
	0x00, 0x51, 0x0c, 0x59, 0x00, 0x00,
	0x00, 0x51, 0x0c, 0x59, 0x11, 0x00,
	0x00, 0x51, 0x08, 0x59, 0x22, 0x22,
	0x00, 0x00, 0x0c, 0x08, 0x11, 0x11,
	0x00, 0x00, 0x3f, 0x3f, 0x22, 0x22,
	0x00, 0x15, 0x3f, 0x3b, 0x33, 0x00,
	0x00, 0x04, 0x3f, 0x19, 0x08, 0x00,
	0x00, 0x04, 0x0c, 0x1d, 0x08, 0x00,
	0x00, 0x15, 0x3b, 0x3f, 0x04, 0x08,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x15, 0x3f, 0x3f, 0x00, 0x00,
	0x00, 0x41, 0x97, 0xc3, 0x00, 0x00,
	0x00, 0x50, 0xe1, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xf0, 0x00, 0x00,
	0x00, 0x50, 0xa0, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0x04, 0x08, 0x0c, 0x00, 0x00,
	0x00, 0x55, 0xaa, 0xff, 0x00, 0x00,
	0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00,
	0x00, 0xff, 0xaa, 0xff, 0xaa, 0x00
};

// Tile sp_player1_18: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_18[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player1_19: 12x24 pixels, 6x24 bytes.
const u8 sp_player1_19[6 * 24] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

