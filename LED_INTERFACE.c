/*
 * LED_INTERFACE.c
 *
 * Created: 11/14/2023 5:23:22 PM
 *  Author: Mahmoud
 */ 
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_INTERFACE.h"
#include "LED_INTERFACE.h"
#include "LED_Config.h"

void LED_One_Void_ON() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_ONE, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORTS, LED_ONE, HIGH);
}

void LED_TWO_Void_ON() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_TWO, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORTS, LED_TWO, HIGH);
}

void LED_THREE_Void_ON() {
	Dio_Void_Set_Pin_Dir(LED_PORT, LED_THREE, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORT, LED_THREE, HIGH);
}

void LED_Void_ONE_OFF() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_ONE, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORTS, LED_ONE, LOW);
}

void LED_Void_TWO_OFF() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_TWO, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORTS, LED_TWO, LOW);
}

void LED_Void_THREE_OFF() {
	Dio_Void_Set_Pin_Dir(LED_PORT, LED_THREE, OUTPUT);
	Dio_Void_Set_Pin_Val(LED_PORT, LED_THREE, LOW);
}

void LED_Void_ONE_Toggle() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_ONE, OUTPUT);
	DIO_Void_Toggle_Pin_Val(LED_PORTS, LED_ONE);
}

void LED_Void_TWO_Toggle() {
	Dio_Void_Set_Pin_Dir(LED_PORTS, LED_TWO, OUTPUT);
	DIO_Void_Toggle_Pin_Val(LED_PORTS, LED_TWO);
}

void LED_Void_THREE_Toggle() {
	Dio_Void_Set_Pin_Dir(LED_PORT, LED_THREE, OUTPUT);
	DIO_Void_Toggle_Pin_Val(LED_PORT, LED_THREE);
}

