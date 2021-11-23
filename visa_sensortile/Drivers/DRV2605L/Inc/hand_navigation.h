/*
 * hand_navigation.h
 *
 *  Created on: Nov 20, 2021
 *      Author: stephensheldon
 */

#ifndef HAND_NAVIGATION_H
#define HAND_NAVIGATION_H

#include <stdint.h>

void move_hand_right(void);
void move_hand_left(void);
void move_hand_up(void);
void move_hand_down(void);
void move_hand_forward(void);
void move_hand_back(void);
uint8_t * get_navigation_waveform(void);


#endif /* HAND_NAVIGATION_H */
