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
        //PINS
		{ .id = VIN,	.limit = RES_LIMIT_UNAVAILABLE,	.name = "VIN"},
		{ .id = GND1,	.limit = RES_LIMIT_UNAVAILABLE,	.name = "GND"},
		{ .id = GPIO13,	.limit = 1, .name = "GPIO13"},
		{ .id = GPIO12,	.limit = 1,	.name = "GPIO12"},
		{ .id = GPIO14,	.limit = 1,	.name = "GPIO14"},
		{ .id = GPIO27,	.limit = 1,	.name = "GPIO27"},
		{ .id = GPIO26,	.limit = 1,	.name = "GPIO26"},
		{ .id = GPIO25,	.limit = 1,	.name = "GPIO25"},
		{ .id = GPIO33,	.limit = 1,	.name = "GPIO33"},
		{ .id = GPIO32,	.limit = 1,	.name = "GPIO32"},
		{ .id = GPIO35,	.limit = 1,	.name = "GPIO35"},
		{ .id = GPIO34,	.limit = 1,	.name = "GPIO34"},
		{ .id = GPIO39,	.limit = 1,	.name = "GPIO39"},
		{ .id = GPIO36,	.limit = 1,	.name = "GPIO36"},
		{ .id = EN,		.limit = RES_LIMIT_UNAVAILABLE,	.name = "EN"},

		{ .id = GPIO23,	.limit = 1,	.name = "GPIO23"},
		{ .id = GPIO22,	.limit = 1,	.name = "GPIO22"},
		{ .id = GPIO1,	.limit = 1,	.name = "GPIO1"},
		{ .id = GPIO3,	.limit = 1,	.name = "GPIO3"},
		{ .id = GPIO21,	.limit = 1,	.name = "GPIO21"},
		{ .id = GPIO19,	.limit = 1,	.name = "GPIO19"},
		{ .id = GPIO18,	.limit = 1,	.name = "GPIO18"},
		{ .id = GPIO5,	.limit = 1,	.name = "GPIO5"},
		{ .id = GPIO17,	.limit = 1,	.name = "GPIO17"},
		{ .id = GPIO16,	.limit = 1,	.name = "GPIO16"},
		{ .id = GPIO4,	.limit = 1,	.name = "GPIO4"},
		{ .id = GPIO2,	.limit = 1,	.name = "GPIO2"},
        { .id = GPIO0,	.limit = 1,	.name = "GPIO0"},
		{ .id = GPIO15,	.limit = 1,	.name = "GPIO15"},
		{ .id = GND2,	.limit = RES_LIMIT_UNAVAILABLE,	.name = "GND"},
		{ .id = V3V3,	.limit = RES_LIMIT_UNAVAILABLE,	.name = "3V3"},

        //CORE RESOURCES
        { .id = RES_LEDC_0,    .limit = 1,	.name = "LEDC0"},
        { .id = RES_LEDC_1,    .limit = 1,	.name = "LEDC1"},

		//VIRTUAL RESOURCES
        { .id = RES_VIRTUAL,    .limit = RES_LIMIT_INFINITY,	.name = "VIRTUAL"},
};
