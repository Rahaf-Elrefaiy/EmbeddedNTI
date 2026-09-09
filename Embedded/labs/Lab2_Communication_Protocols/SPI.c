/*
 * SPI.c
 *
 * Created: 9/9/2026 9:56:46 PM
 *  Author: Admin
 */ 

#include <avr/io.h>
#include "Std_types.h"
#include "Bit_Math.h"
#include "DIO.h"
#include "SPI.h"

void SPI_voidMasterInit(void) {
	DIO_voidSetPinDirection(DIO_PORTB, PIN5, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN7, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN4, OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN6, INPUT);

	SPCR = (1 << SPE) | (1 << MSTR) | (1 << SPR0);
}

void SPI_voidSlaveInit(void) {
	DIO_voidSetPinDirection(DIO_PORTB, PIN5, INPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN7, INPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN4, INPUT);
	DIO_voidSetPinDirection(DIO_PORTB, PIN6, OUTPUT);

	SPCR = (1 << SPE);
}

u8 SPI_u8Transceive(u8 copy_u8Data) {
	SPDR = copy_u8Data;
	while (!(SPSR & (1 << SPIF))); 
	return SPDR;
}