/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2023
 *      Author: Lenovo
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag, timer2_flag, timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();



#endif /* INC_SOFTWARE_TIMER_H_ */
