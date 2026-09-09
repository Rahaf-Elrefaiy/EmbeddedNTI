/*
 * SPI.h
 *
 * Created: 9/9/2026 9:56:29 PM
 *  Author: Admin
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "Std_types.h"

void SPI_voidMasterInit(void);
void SPI_voidSlaveInit(void);
u8   SPI_u8Transceive(u8 copy_u8Data);

#endif