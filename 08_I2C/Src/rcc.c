/*
 * rcc.c
 *
 *  Created on: Nov 28, 2024
 *      Author: Minh Tuan
 */


#include <rcc.h>


void enable_RCC_APB2ENR(unsigned long REG){
	RCC->RCC_APB2ENR.REG |= REG;
}

void enable_RCC_APB1ENR(unsigned long REG){
	RCC->RCC_APB1ENR.REG |= REG;
}
