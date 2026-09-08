/*
 * GccApplication20.c
 *
 * Created: 9/8/2026 10:30:33 PM
 * Author : Admin
 */ 


	#include "Std_types.h"
	#include "TIMER1.h"
	#include <util/delay.h>

	int main(void)
	{
		TIMER1_Init();

		while (1)
		{
			TIMER1_SetAngle(0);
			_delay_ms(1000);

			TIMER1_SetAngle(90);
			_delay_ms(1000);

			TIMER1_SetAngle(180);
			_delay_ms(1000);
		}
	}