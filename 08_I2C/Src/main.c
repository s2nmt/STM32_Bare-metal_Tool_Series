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
#define SLAVE_ADDRESS  0x3C

void I2C1_Init(void){
	I2C1->I2C_CR1.REG |= (1 << 15);
	I2C1->I2C_CR1.REG &= ~(1 << 15);
	I2C1->I2C_OAR1.REG |= 1 << 14;
	I2C1->I2C_CR2.REG = 8;
	I2C1->I2C_CCR.REG = 40;
	I2C1->I2C_TRISE.REG = 9;
	I2C1->I2C_CR1.REG |= 1 ;
}
void I2C1_Start(void) {
	I2C1->I2C_CR1.REG |= (1 << 10);
	I2C1->I2C_CR1.REG |= (1 << 8);
    while (!(I2C1->I2C_SR1.REG & (1 << 0)));
    (void)I2C1->I2C_SR1.REG;
}

void I2C1_Write(uint8_t data) {
    I2C1->I2C_DR.REG = data;                // Write data to the Data Register
}

void I2C1_Stop(void) {
	I2C1->I2C_CR1.REG |= (1 << 9);   // Generate STOP condition
    while (I2C1->I2C_CR1.REG & (1 << 9)); // Wait for STOP condition to clear
}

int main(void)
{
	enable_RCC_APB1ENR(APB1_I2C1);
	enable_RCC_APB2ENR(APB2_PORT_B);
	GPIO_Mode(GPIOB, 6, GPIO_MODE_AF_OUTPUT_OPEN_50MHz);
	GPIO_Mode(GPIOB, 7, GPIO_MODE_AF_OUTPUT_OPEN_50MHz);
	I2C1_Init();

    /* Loop forever */
	while(1){
	    I2C1_Start();
	    I2C1_Write(SLAVE_ADDRESS << 1); // Send slave address with write bit (0)
	    I2C1_Write(0x00);              // Send data byte
	    I2C1_Stop();
	    for (volatile int i = 0; i < 500000; i++);
	}
}
