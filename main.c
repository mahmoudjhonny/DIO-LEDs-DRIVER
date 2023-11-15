/*
 * DioDriver.c
 *
 * Created: 11/14/2023 2:23:45 PM
 * Author : Mahmoud
 */ 
#define F_CPU 16000000UL
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "DIO_PRIVATE.h"
#include "DIO_INTERFACE.h"
#include "LED_INTERFACE.h"
#include "BUTTON_INTERFACE.h"
#include <util/delay.h>

int main(void)
{
	Button_Init();
	while(1) {
		if(BUTTON_PUSH() == HIGH) {
				LED_One_Void_ON();
				_delay_ms(250);
				LED_Void_ONE_OFF();
				LED_TWO_Void_ON();
				_delay_ms(250);
				LED_Void_TWO_OFF();
				LED_THREE_Void_ON();
				_delay_ms(250);
				LED_Void_THREE_OFF();
				while(BUTTON_PUSH() == HIGH);
		}
	}
}

