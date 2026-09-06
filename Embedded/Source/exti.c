/*
 * exti.c
 *
 * Created: 9/6/2026 7:21:29 PM
 *  Author: Admin
 */ 

#include <avr/io.h>

#include "Std_types.h"
#include "Bit_Math.h"
#include "DIO.h"
#include "exti.h"

void initExternalInterupts(void)
{
	
	DIO_voidSetPinDirection(DIO_PORTD, PIN2, INPUT);
	DIO_voidSetPinDirection(DIO_PORTD, PIN3, INPUT);
	
	DIO_voidSetPinValue(DIO_PORTD, PIN2, HIGH);
	DIO_voidSetPinValue(DIO_PORTD, PIN3, HIGH);

	
	CLR_BIT(MCUCR, ISC01);
	SET_BIT(MCUCR, ISC00);

	
	CLR_BIT(MCUCR, ISC11);
	SET_BIT(MCUCR, ISC10);

	
	SET_BIT(GICR, INT0);
	SET_BIT(GICR, INT1);
}