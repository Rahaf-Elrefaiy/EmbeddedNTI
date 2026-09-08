/*
 * Timer0.h
 *
 * Created: 9/8/2026 5:56:15 PM
 *  Author: Admin
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_

#include "Std_types.h"

void TIMER0_voidInit(void);
void TIMER0_voidSetPreload(u8 Copy_u8Value);
void TIMER0_voidClearOverflowFlag(void);
u8   TIMER0_u8GetOverflowFlag(void);

#endif