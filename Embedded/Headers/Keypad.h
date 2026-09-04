/*
 * Keypad.h
 *
 * Created: 9/3/2026 11:01:18 PM
 *  Author: Admin
 */ 

#ifndef KEYPAD_H_
#define KEYPAD_H_

#define KPD_NOT_PRESSED  0b11111111

void KPD_Init(void);
u8   KPD_GetPressedKey(void);

#endif
