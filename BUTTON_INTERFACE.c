/*
 * BUTTON_INTERFACE.c
 *
 * Created: 11/14/2023 5:49:58 PM
 *  Author: Mahmoud
 */ 

#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_INTERFACE.h"
#include "BUTTON_INTERFACE.h"
#include "BUTTON_CONFIG.h"

void Button_Init() {
	Dio_Void_Set_Pin_Dir(BUTTON_PORT, BUTTON_PIN, INPUT);
}

u8 BUTTON_PUSH() {
	return DIO_U8_Get_Pin_Val(BUTTON_PORT, BUTTON_PIN);
}
