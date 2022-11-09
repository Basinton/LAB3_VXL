/*
 * global.c
 *
 *  Created on: Sep 30, 2022
 *      Author: trong
 */

#include "global.h"

int mode = INIT;
int status = 0;
int state = init;

int yellowTime;
int greenTime;
int redTime;

int ledModeData;
int ledValueData;

void initValues() {
	yellowTime = YELLOW_TIME;
	greenTime = GREEN_TIME;
	redTime = RED_TIME;
	ledModeData = redTime;
	ledValueData = greenTime;
}
