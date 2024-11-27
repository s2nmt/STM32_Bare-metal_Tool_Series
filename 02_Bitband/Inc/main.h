/*
 * main.h
 *
 *  Created on: Nov 22, 2024
 *      Author: Minh Tuan
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <gpio.h>
#include <stdint.h>

#define RCC_APB2ENR     (*((volatile unsigned long *)0x40021018))
#define RCC_IOPCEN      (1 << 4)
#endif /* MAIN_H_ */
