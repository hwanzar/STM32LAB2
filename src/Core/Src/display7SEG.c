/*
 * display7SEG.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Lenovo
 */


#include "main.h"
#include "display7SEG.h"

void display7SEG(int num) {
	if(num <= 9 && num >= 0){
		if(num == 0) GPIOB->ODR = 0x40;
		if(num == 1) GPIOB->ODR = 0x79;
		if(num == 2) GPIOB->ODR = 0x24;
		if(num == 3) GPIOB->ODR = 0x30;
		if(num == 4) GPIOB->ODR = 0x19;
		if(num == 5) GPIOB->ODR = 0x12;
		if(num == 6) GPIOB->ODR = 0x02;
		if(num == 7) GPIOB->ODR = 0x78;
		if(num == 8) GPIOB->ODR = 0x00;
		if(num == 9) GPIOB->ODR = 0x10;
	}
	else GPIOB->ODR = 0x7F;
}
