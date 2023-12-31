/*
 * BIT_MATH.h
 *
 * Created: 11/14/2023 2:32:41 PM
 *  Author: Mahmoud
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) (REG |= (1 << BIT))
#define CLR_BIT(REG,BIT) (REG &= (~(1 << BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1 << (BIT)))
#define GET_BIT(REG,BIT) ((REG >> BIT) & 1)

#endif /* BIT_MATH_H_ */