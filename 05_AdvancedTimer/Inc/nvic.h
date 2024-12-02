/*
 * nvic.h
 *
 *  Created on: Nov 29, 2024
 *      Author: Minh Tuan
 */

#ifndef NVIC_H_
#define NVIC_H_

typedef struct{

	unsigned long NVIC_ISER0;
	unsigned long NVIC_ISER1;
	unsigned long NVIC_ISER2;
	unsigned long NVIC_ICER0;
	unsigned long NVIC_ICER1;
	unsigned long NVIC_ICER2;
	unsigned long NVIC_ISPR0;
	unsigned long NVIC_ISPR1;
	unsigned long NVIC_ISPR2;
	unsigned long NVIC_ICPR0;
	unsigned long NVIC_ICPR1;
	unsigned long NVIC_ICPR2;
	unsigned long NVIC_IABR0;
	unsigned long NVIC_IABR1;
	unsigned long NVIC_IABR2;
	unsigned long NVIC_IPR0;
	unsigned long NVIC_IPR0;
}NVIC_TypeDef;

#endif /* NVIC_H_ */
