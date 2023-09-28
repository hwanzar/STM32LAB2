/*
 * 7seg.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Lenovo
 */

#include "main.h"
#include "7seg.h"


void display7SEG(int num){
	if(num == 0) GPIOB->ODR = 0x01;
	if(num == 1) GPIOB->ODR = 0x79;
	if(num == 2) GPIOB->ODR = 0x24;
	if(num == 3) GPIOB->ODR = 0x06;
	if(num == 4) GPIOB->ODR = 0x4C;
	if(num == 5) GPIOB->ODR = 0x24;
	if(num == 6) GPIOB->ODR = 0x20;
	if(num == 7) GPIOB->ODR = 0x0F;
	if(num == 8) GPIOB->ODR = 0x00;
	if(num == 9) GPIOB->ODR = 0x04;
}
