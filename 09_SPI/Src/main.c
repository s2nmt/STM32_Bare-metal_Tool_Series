/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <main.h>

void SPI1_Transmit(uint8_t data) {
    while (!(SPI1->SPI_SR.BITS.TXE));
    SPI1->SPI_DR.REG = data;
}
uint8_t SPI1_Receive(void) {
    while (!(SPI1->SPI_SR.BITS.RXNE));
    return SPI1->SPI_DR.REG;
}
void delay_ms(unsigned long ms) {
    for (unsigned long i = 0; i < ms*1000; i++) {
        __asm("nop");
    }
}
int main(void)
{
	enable_RCC_APB2ENR(APB2_SPI1|APB2_PORT_A);

//	GPIO_Mode(GPIOA,4,GPIO_MODE_INPUT_FLOAT);
	GPIO_Mode(GPIOA,5,GPIO_MODE_AF_OUTPUT_PUSHPULL_50MHz);
	GPIO_Mode(GPIOA,6,GPIO_MODE_INPUT_FLOAT);
	GPIO_Mode(GPIOA,7,GPIO_MODE_AF_OUTPUT_PUSHPULL_50MHz);

	SPI1->SPI_CR1.REG |= (1 << 2) | (3 << 3) ;

	SPI1->SPI_CR1.REG |= 1 << 6;
    /* Loop forever */
	while(1){

        SPI1_Transmit(0xA5);
        delay_ms(500);

	}
}
