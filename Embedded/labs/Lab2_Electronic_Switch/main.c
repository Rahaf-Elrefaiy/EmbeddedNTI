/*
 * GccApplication9.c
 *
 * Created: 9/5/2026 4:27:21 PM
 * Author : Admin
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>

#include "Std_types.h"
#include "Bit_Math.h"
#include "DIO.h"
int main(void)
{
	
	DIO_voidSetPinDirection(DIO_PORTC, PIN0, OUTPUT); 
	DIO_voidSetPinDirection(DIO_PORTC, PIN1, OUTPUT); 
	DIO_voidSetPinDirection(DIO_PORTC, PIN2, OUTPUT); 
	DIO_voidSetPinDirection(DIO_PORTC, PIN3, OUTPUT); 
	
	DIO_voidSetPinDirection(DIO_PORTA, PIN0, INPUT);
	DIO_voidSetPinValue(DIO_PORTA, PIN0, HIGH); 

	while (1)
	{
		if (DIO_u8GetPinValue(DIO_PORTA, PIN0) == LOW)
		{
			
			DIO_voidSetPinValue(DIO_PORTC, PIN0, LOW);  
			DIO_voidSetPinValue(DIO_PORTC, PIN1, LOW);  
			DIO_voidSetPinValue(DIO_PORTC, PIN2, HIGH); 
			DIO_voidSetPinValue(DIO_PORTC, PIN3, HIGH); 
		}
		else
		{
			
			DIO_voidSetPinValue(DIO_PORTC, PIN0, HIGH); 
			DIO_voidSetPinValue(DIO_PORTC, PIN1, HIGH); 
			DIO_voidSetPinValue(DIO_PORTC, PIN2, LOW);  
			DIO_voidSetPinValue(DIO_PORTC, PIN3, LOW); 
		}
	}
	return 0;
}