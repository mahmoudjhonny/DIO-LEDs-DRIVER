/*
 * BUTTON_INTERFACE.h
 *
 * Created: 11/14/2023 5:49:34 PM
 *  Author: Mahmoud
 */ 


#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

/******************************************************************************************************************
* Function Name: Button_Init
* purpose: set BUTTON DIRECTION (INPUT)
* parameters: void
* return value: void
*******************************************************************************************************************/
void Button_Init();
/******************************************************************************************************************
* Function Name: BUTTON_PUSH
* purpose: set BUTTON VALUE (HIGH)
* parameters: u8
* return value: u8
*******************************************************************************************************************/
u8 BUTTON_PUSH();


#endif /* BUTTON_INTERFACE_H_ */