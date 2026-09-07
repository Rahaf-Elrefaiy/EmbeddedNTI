/*
 * GccApplication16.c
 *
 * Created: 9/7/2026 9:19:36 PM
 * Author : Admin
 */ 

#include "Std_types.h"
#include "Bit_Math.h"
#include "DIO.h"
#include "ADC.h"

#define LDR_THRESHOLD   500

int main(void)
{
	u16 adc_value = 0;

	ADC_Init();
	DIO_voidSetPinDirection(DIO_PORTC, PIN0, OUTPUT); 

	while(1)
	{
		adc_value = ADC_Read(0);

		if(adc_value < LDR_THRESHOLD)
		{
			// Dark: Turn LED ON
			DIO_voidSetPinValue(DIO_PORTC, PIN0, HIGH);
		}
		else
		{
			// Bright: Turn LED OFF
			DIO_voidSetPinValue(DIO_PORTC, PIN0, LOW);
		}
	}
	return 0;
}