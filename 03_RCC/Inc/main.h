/*
 * main.h
 *
 *  Created on: Nov 26, 2024
 *      Author: Minh Tuan
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>
#include <rcc.h>
#include <gpio.h>



typedef struct {
	union {
		unsigned long REG;
		struct {
			unsigned long LATENCY 		 : 3;
			unsigned long HLFCYA 		 : 1;
			unsigned long PRFTBE   		 : 1;
			const unsigned long PRFTBS	 : 1;
			unsigned long _reserved   	 : 26;
		} BITS;
	}FLASH_ACR;

} FLASH_TypeDef;

#define FLASH ((FLASH_TypeDef *)0x40022000)

#endif /* MAIN_H_ */
