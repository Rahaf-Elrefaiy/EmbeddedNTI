/*
 * UART.h
 *
 * Created: 9/9/2026 7:25:51 PM
 *  Author: Admin
 */ 


#ifndef UART_H_
#define UART_H_

#include "Std_types.h"

void UART_Init(void);
void UART_SendChar(u8 data);
void UART_SendByte(u8 data);
void UART_SendString(const char *str);
u8   UART_ReceiveChar(void);

#endif