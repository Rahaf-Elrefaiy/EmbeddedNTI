/*
 * Stepper.h
 *
 * Created: 9/5/2026 6:49:33 PM
 *  Author: Admin
 */ 


#ifndef STEPPER_H_
#define STEPPER_H_

#include "Std_types.h"
#include "DIO.h"

#define STEPPER_PORT     DIO_PORTC

#define STEPPER_PIN0     PIN0
#define STEPPER_PIN1     PIN1
#define STEPPER_PIN2     PIN2
#define STEPPER_PIN3     PIN3

void Stepper_voidInit(void);
void Stepper_voidRotate(u8 Local_u8Direction, u16 Local_u16Steps);

#endif