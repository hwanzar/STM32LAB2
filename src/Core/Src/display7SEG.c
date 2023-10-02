/*
 * display7SEG.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Lenovo
 */


#include "main.h"
#include "display7SEG.h"
void display7SEG(int counter){
	if(counter == 0){
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, 1);
	}
	else if(counter == 1){
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 1);
	}
	else if(counter == 2){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG3_Pin|SEG4_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin|SEG5_Pin, 1);
	}
	else if(counter == 3){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin|SEG5_Pin, 1);
	}
	else if (counter == 4){
		HAL_GPIO_WritePin(GPIOB,SEG1_Pin|SEG2_Pin|SEG5_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin|SEG3_Pin|SEG4_Pin, 1);
	}
	else if (counter == 5){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG2_Pin|SEG3_Pin|SEG5_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin|SEG4_Pin, 1);
	}
	else if (counter == 6){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, 1);
	}
	else if (counter == 7){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG2_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 1);
	}
	else if (counter == 8){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG4_Pin|SEG5_Pin|SEG6_Pin, 0);
	}
	else if (counter == 9){
		HAL_GPIO_WritePin(GPIOB,SEG0_Pin|SEG1_Pin|SEG2_Pin|SEG3_Pin|SEG5_Pin|SEG6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB,SEG4_Pin, 1);
	}
}


