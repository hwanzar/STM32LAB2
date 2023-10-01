/*
 * software_timer.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Lenovo
 */


#include "software_timer.h"
#include "main.h"


int timer_counter[10] = {0};
int timer_flag[10] = {0};

void setTimer(int i, int duration){
	timer_flag[i] = 0;
	timer_counter[i] = duration;
}
void timer_run(int i){
	if(timer_counter[i] > 0){
		timer_counter[i]--;
		if(timer_counter[i] <= 0) timer_flag[i] = 1;
	}
}
void timerRun(){
	timer_run(0);
	timer_run(1);
}
