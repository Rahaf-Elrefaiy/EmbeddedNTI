/*
 * GccApplication5.c
 *
 * Created: 9/3/2026 6:19:52 PM
 * Author : Admin
 */ 

#include <util/delay.h>
#include "Std_types.h"
#include "DIO.h"
#include "LCD.h"

int main(void)
{
	LCD_init();

	_delay_ms(1000);

	LCD_SendString((u8*)"Rahaf");

	_delay_ms(2000);

	while (1)
	{
	}

	return 0;
}

