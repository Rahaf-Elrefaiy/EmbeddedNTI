/*
 * GccApplication11.c
 *
 * Created: 9/6/2026 7:13:22 PM
 * Author : Admin
 */ 

#include <avr/interrupt.h>
#include "Std_types.h"
#include "DIO.h"
#include "Bit_Math.h"
#include "exti.h"

int main(void)
{
	DIO_voidSetPinDirection(DIO_PORTC, PIN0, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTC, PIN1, OUTPUT);

	initExternalInterupts();

	sei();

	while(1)
	{
	}
}

ISR(INT0_vect)
{
	TOG_BIT(PORTC, PIN0);
}

ISR(INT1_vect)
{
	TOG_BIT(PORTC, PIN1);
}

