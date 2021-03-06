/*
 * pid_controller.h
 *
 *  Created on: Apr 20, 2016
 *      Author: CornellCup
 */

#ifndef PID_CONTROLLER_H_
#define PID_CONTROLLER_H_

typedef struct{
	float Kp;
	float Ki;
	float Kd;
	float dt;
	float accumulator;
	float error;
}motor_pid_t;

#define PID_MAX		1000
#define PID_MIN		(-PID_MAX)

float motor_pid(motor_pid_t* pid, float target_speed, float motor_speed);

#endif /* PID_CONTROLLER_H_ */
