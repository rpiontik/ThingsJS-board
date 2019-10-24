/*
 * hw_consts.c
 *
 *  Created on: 5 февр. 2019 г.
 *      Author: rpiontik
 */

#include "thingjs_board.h"

const char BOARD_ID[]		= "ESP32_CORE_BOARD";
const char BOARD_VERSION[]	= "V2";

const struct board_pin	BOARD_PINS_MAP[BOARD_TOTAL_NUMBER_OF_PINS] = {
		{ .id = VIN,	.available = false,	.name = "VIN"},
		{ .id = GND1,	.available = false,	.name = "GND"},
		{ .id = GPIO13,	.available = true,	.name = "GPIO13"},
		{ .id = GPIO12,	.available = true,	.name = "GPIO12"},
		{ .id = GPIO14,	.available = true,	.name = "GPIO14"},
		{ .id = GPIO27,	.available = true,	.name = "GPIO27"},
		{ .id = GPIO26,	.available = true,	.name = "GPIO26"},
		{ .id = GPIO25,	.available = true,	.name = "GPIO25"},
		{ .id = GPIO33,	.available = true,	.name = "GPIO33"},
		{ .id = GPIO32,	.available = true,	.name = "GPIO32"},
		{ .id = GPIO35,	.available = true,	.name = "GPIO35"},
		{ .id = GPIO34,	.available = true,	.name = "GPIO34"},
		{ .id = GPIO39,	.available = true,	.name = "GPIO39"},
		{ .id = GPIO36,	.available = true,	.name = "GPIO36"},
		{ .id = EN,		.available = false,	.name = "EN"},

		{ .id = GPIO23,	.available = true,	.name = "GPIO23"},
		{ .id = GPIO22,	.available = true,	.name = "GPIO22"},
		{ .id = GPIO1,	.available = true,	.name = "GPIO1"},
		{ .id = GPIO3,	.available = true,	.name = "GPIO3"},
		{ .id = GPIO21,	.available = true,	.name = "GPIO21"},
		{ .id = GPIO19,	.available = true,	.name = "GPIO19"},
		{ .id = GPIO18,	.available = true,	.name = "GPIO18"},
		{ .id = GPIO5,	.available = true,	.name = "GPIO5"},
		{ .id = GPIO17,	.available = true,	.name = "GPIO17"},
		{ .id = GPIO16,	.available = true,	.name = "GPIO16"},
		{ .id = GPIO4,	.available = true,	.name = "GPIO4"},
		{ .id = GPIO2,	.available = true,	.name = "GPIO2"},
        { .id = GPIO0,	.available = true,	.name = "GPIO0"},
		{ .id = GPIO15,	.available = true,	.name = "GPIO15"},
		{ .id = GND2,	.available = false,	.name = "GND"},
		{ .id = V3V3,	.available = false,	.name = "3V3"}
};
