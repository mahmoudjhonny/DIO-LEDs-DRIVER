/*
 * DIO_INTERFACE.h
 *
 * Created: 11/14/2023 2:43:58 PM
 *  Author: Mahmoud
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

// Define Macros For Direction
#define OUTPUT 1
#define INPUT 0

// Define Macros For high/low Values
#define HIGH 1
#define LOW 0 

// Define Ports
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

// Define Pins
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

void Dio_Void_Set_Pin_Dir(u8 u8_port, u8 u8_pin, u8 u8_dir);
void Dio_Void_Set_Pin_Val(u8 u8_port, u8 u8_pin, u8 u8_val);
u8 DIO_U8_Get_Pin_Val(u8 u8_port, u8 u8_pin);
void DIO_Void_Toggle_Pin_Val(u8 copy_u8_port, u8 copy_u8_pin);

void DIO_Set_Port_Dir(u8 u8_port, u8 u8_dir);
void DIO_Set_Port_Val(u8 u8_port, u8 u8_val);

#endif /* DIO_INTERFACE_H_ */