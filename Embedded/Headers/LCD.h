/*
 * LCD.h
 *
 * Created: 9/3/2026 6:33:23 PM
 *  Author: Admin
 */ 

#include "Std_types.h"
#ifndef LCD_H_
#define LCD_H_


//init
void LCD_init();

//char
void LCD_sendChar(u8 Data);

//send command
void LCD_SendCommand(u8 command);

//Send String
void LCD_SendString (u8 *str);

#endif /* LCD_H_ */