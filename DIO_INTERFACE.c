/*
 * DIO_INTERFACE.c
 *
 * Created: 11/14/2023 2:44:18 PM
 *  Author: Mahmoud
 */ 

#include "BIT_MATH.h"
#include "DIO_PRIVATE.h"
#include "STD_TYPE.h"
#include "DIO_INTERFACE.h"

void Dio_Void_Set_Pin_Dir(u8 u8_port, u8 u8_pin, u8 u8_dir) {
	if(u8_dir == OUTPUT) {
		switch(u8_port) {
			case PORTA: 
				SET_BIT(DDRA_REG, u8_pin);
				break;
			case PORTB:
				SET_BIT(DDRB_REG, u8_pin);
				break;
			case PORTC:
				SET_BIT(DDRC_REG, u8_pin);
				break;
			case PORTD:
				SET_BIT(DDRD_REG, u8_pin);
				break;
			default:
				break;	
		}
	} else if(u8_dir == INPUT) {
		switch(u8_port) {
			case PORTA:
				CLR_BIT(DDRA_REG, u8_pin);
				break;
			case PORTB:
				CLR_BIT(DDRB_REG, u8_pin);
				break;
			case PORTC:
				CLR_BIT(DDRC_REG, u8_pin);
				break;
			case PORTD:
				CLR_BIT(DDRD_REG, u8_pin);
				break;
			default:
				break;
	} 
		}
		else {
			// Do Nothing
		}
}

void Dio_Void_Set_Pin_Val(u8 u8_port, u8 u8_pin, u8 u8_val) {
	if(u8_val == HIGH) {
		switch(u8_port) {
			case PORTA:
				SET_BIT(PORTA_REG, u8_pin);
				break;
			case PORTB:
				SET_BIT(PORTB_REG, u8_pin);
				break;
			case PORTC:
				SET_BIT(PORTC_REG, u8_pin);
				break;
			case PORTD:
				SET_BIT(PORTD_REG, u8_pin);
				break;
			default:
				break;
		}
		} else if(u8_val == LOW) {
		switch(u8_port) {
			case PORTA:
				CLR_BIT(PORTA_REG, u8_pin);
				break;
			case PORTB:
				CLR_BIT(PORTB_REG, u8_pin);
				break;
			case PORTC:
				CLR_BIT(PORTC_REG, u8_pin);
				break;
			case PORTD:
				CLR_BIT(PORTD_REG, u8_pin);
				break;
			default:
				break;
	}
		} else {
			// Do Nothing
		}
}

u8 DIO_U8_Get_Pin_Val(u8 u8_port, u8 u8_pin) {
	u8 return_val = 0;
	switch(u8_port) {
		case PORTA: 
			return_val = GET_BIT(PINA_REG, u8_pin);
			break;
		case PORTB:
			return_val = GET_BIT(PINB_REG, u8_pin);
			break;
		case PORTC:
			return_val = GET_BIT(PINC_REG, u8_pin);
			break;
		case PORTD:
			return_val = GET_BIT(PIND_REG, u8_pin);
			break;
		default:
			break;
	}
	return return_val;
}

void DIO_Set_Port_Dir(u8 u8_port, u8 u8_dir) {
	switch(u8_port) {
		case PORTA:
			u8_port = u8_dir;
			break;
		case PORTB:
			u8_port = u8_dir;
			break;
		case PORTC:
			u8_port = u8_dir;
			break;
		case PORTD:
			u8_port = u8_dir;
			break;
		default:
			break;
	}
}

void DIO_Set_Port_Val(u8 u8_port, u8 u8_val) {
	switch(u8_port) {
		case PORTA:
			u8_port = u8_val;
			break;
		case PORTB:
			u8_port = u8_val;
			break;
		case PORTC:
			u8_port = u8_val;
			break;
		case PORTD:
			u8_port = u8_val;
			break;
		default:
			break;
	}
}

void DIO_Void_Toggle_Pin_Val(u8 copy_u8_port, u8 copy_u8_pin) {
	switch(copy_u8_port){
		case PORTA : 
			TOGGLE_BIT(PORTA_REG,copy_u8_pin); 
			break ;
		case PORTB : 
			TOGGLE_BIT(PORTB_REG,copy_u8_pin); 
			break ;
		case PORTC : 
			TOGGLE_BIT(PORTC_REG,copy_u8_pin); 
			break ;
		case PORTD : 
			TOGGLE_BIT(PORTD_REG,copy_u8_pin); 
			break ;
		
	}	
}
