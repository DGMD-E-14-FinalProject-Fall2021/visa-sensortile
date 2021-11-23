/*
 * hand_navigation.c
 *
 *  Created on: Nov 20, 2021
 *      Author: stephensheldon
 */

#include "hand_navigation.h"

// Current waveform is 0 meaning no waveform
uint8_t current_waveform[8] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};

void move_hand_right(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x40; // Transition hum 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x40; // Transition hum 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x2F; // Buzz 1 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}

void move_hand_left(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x40; // Transition hum 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x2F; // Buzz 1 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x40; // Transition hum 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}

void move_hand_up(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x40; // Transition hum 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x2F; // Buzz 1 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x2F; // Buzz 1 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}

void move_hand_down(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x2F; // Buzz 1 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x40; // Transition hum 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x40; // Transition hum 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}

void move_hand_forward(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x2F; // Buzz 1 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x40; // Transition hum 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x2F; // Buzz 1 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}


void move_hand_back(void) {
	current_waveform[0] = 0xC6; // 70 ms delay
	current_waveform[1] = 0x2F; // Buzz 1 100%
	current_waveform[2] = 0x9E; // 30 ms delay
	current_waveform[3] = 0x2F; // Buzz 1 100%
	current_waveform[4] = 0x9E; // 30 ms delay
	current_waveform[5] = 0x40; // Transition hum 100%
	current_waveform[6] = 0x00; // None
	current_waveform[7] = 0x00; // None
}

uint8_t * get_navigation_waveform(void) {
	return current_waveform;
}

