/*
 * gpio.c
 *
 *  Created on: Nov 21, 2024
 *      Author: Minh Tuan
 */

#include "gpio.h"

/*
 * There are two variables: set and reset.
 * - `set` is used to assign the value 1 to the register.
 * - `reset` is used to assign the value 0 to the register.
 * I assigh the 4 bit Mode to 0 to reset it and then assign new mode values using set command
 * register CRH for gpio 8 - 15
 * register CRL for gpio 0 - 8
 */
void GPIO_Mode(volatile GPIO_TypeDef* GPIO, uint8_t GPIO_PIN, GPIO_MODE Mode)
{
  unsigned int reset = ~0, set = 0 ;

  reset &= ~(((1 << 4) - 1) << ((GPIO_PIN % 8)*4));
  set   |= Mode <<  ((GPIO_PIN % 8)*4);
  if(GPIO_PIN > 7){
	  GPIO->CRH.REG &= reset;
	  GPIO->CRH.REG |= set;
  }
  else{
	  GPIO->CRL.REG &= reset;
	  GPIO->CRL.REG |= set;
  }
}

/*
 * Return the IDR register IDR to check Input
 */
GPIO_STATE GPIO_Read(volatile GPIO_TypeDef* GPIO, uint8_t PIN){
	return (GPIO->IDR.REG >> PIN) & 1;
}

/*
 * First I check the current state of the GPIO if it is the same, I will return
 * if it is different, I use the BSRR register to control it.
 */
void GPIO_Write(volatile GPIO_TypeDef* GPIO, uint8_t PIN, GPIO_STATE state){

	if(((GPIO->ODR.REG >> PIN) & 1) == state) return;

	switch(state){
		case GPIO_RESET:
			GPIO->BSRR.REG = (1UL << (16 + PIN));
			break;
		case GPIO_SET:
			GPIO->BSRR.REG = (1UL << PIN);
			break;
	}
}
/*
 * I use the ODR register to detect the current state and then I toggle state
 */
void GPIO_Toggle(volatile GPIO_TypeDef* GPIO, uint8_t PIN){

	GPIO->BSRR.REG = (1UL << (16*((GPIO->ODR.REG >> PIN) & 1) + PIN));
}






