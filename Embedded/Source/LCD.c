/*
 * LCD.c
 *
 * Created: 9/3/2026 6:33:40 PM
 *  Author: Admin
 */ 

#include "Std_types.h"
#include "DIO.h"
#include "LCD.h"
#include <util/delay.h>


void LCD_SendCommand(u8 command)
{
	/* Reset RS and RW pins */
	DIO_voidSetPinValue(DIO_PORTD, PIN0, LOW);   
	DIO_voidSetPinValue(DIO_PORTD, PIN1, LOW);   

	/* Send command through data port */
	DIO_voidSetPortValue(DIO_PORTC, command);

	/* Set E, wait, then reset E */
	DIO_voidSetPinValue(DIO_PORTD, PIN2, HIGH);  
	_delay_ms(1);
	DIO_voidSetPinValue(DIO_PORTD, PIN2, LOW);   

	_delay_ms(2);
}


void LCD_sendChar(u8 Data)
{
	/* Set RS, reset RW, and set E */
	DIO_voidSetPinValue(DIO_PORTD, PIN0, HIGH);  
	DIO_voidSetPinValue(DIO_PORTD, PIN1, LOW);   
	DIO_voidSetPinValue(DIO_PORTD, PIN2, HIGH);  

	/* Send data through data port */
	DIO_voidSetPortValue(DIO_PORTC, Data);

	_delay_ms(1);

	/* Reset E */
	DIO_voidSetPinValue(DIO_PORTD, PIN2, LOW);

	_delay_ms(2);
}


void LCD_init(void)
{
	/* Set data port as output */
	DIO_voidSetPortDirection(DIO_PORTC, OUTPUT);

	/* Set control pins as output */
	DIO_voidSetPinDirection(DIO_PORTD, PIN0, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTD, PIN1, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTD, PIN2, OUTPUT);

	_delay_ms(20);

	/* LCD initialization commands */
	LCD_SendCommand(0b00111000);  
	LCD_SendCommand(0b00001100);  
	LCD_SendCommand(0b00000001);  
	LCD_SendCommand(0b00000110);  

	_delay_ms(2);
}


void LCD_SendString(u8 *str)
{
	while (*str != '\0')
	{
		LCD_sendChar(*str);
		str++;
	}
}