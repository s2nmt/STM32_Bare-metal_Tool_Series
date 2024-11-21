/*
 * main.h
 *
 *  Created on: Nov 21, 2024
 *      Author: Minh Tuan
 */

#ifndef MAIN_H_
#define MAIN_H_


typedef struct
{
	union
	{
		unsigned long REG;
		struct
		{
			unsigned long MODE_0  : 2;
			unsigned long  CNF_0  : 2;
			unsigned long MODE_1  : 2;
			unsigned long  CNF_1  : 2;
			unsigned long MODE_2  : 2;
			unsigned long  CNF_2  : 2;
			unsigned long MODE_3  : 2;
			unsigned long  CNF_3  : 2;
			unsigned long MODE_4  : 2;
			unsigned long  CNF_4  : 2;
			unsigned long MODE_5  : 2;
			unsigned long  CNF_5  : 2;
			unsigned long MODE_6  : 2;
			unsigned long  CNF_6  : 2;
			unsigned long MODE_7  : 2;
			unsigned long  CNF_7  : 2;
		} BITS;

	}CRL;

	union
	{
		unsigned long REG;
		struct
		{
			unsigned long MODE_8  : 2;
			unsigned long  CNF_8  : 2;
			unsigned long MODE_9  : 2;
			unsigned long  CNF_9  : 2;
			unsigned long MODE_10 : 2;
			unsigned long  CNF_10 : 2;
			unsigned long MODE_11 : 2;
			unsigned long  CNF_11 : 2;
			unsigned long MODE_12 : 2;
			unsigned long  CNF_12 : 2;
			unsigned long MODE_13 : 2;
			unsigned long  CNF_13 : 2;
			unsigned long MODE_14 : 2;
			unsigned long  CNF_14 : 2;
			unsigned long MODE_15 : 2;
			unsigned long  CNF_15 : 2;
		} BITS;
	}CRH;


	union
	{
		unsigned long REG;
		struct
		{
			unsigned long b0  : 1;
			unsigned long b1  : 1;
			unsigned long b2  : 1;
			unsigned long b3  : 1;
			unsigned long b4  : 1;
			unsigned long b5  : 1;
			unsigned long b6  : 1;
			unsigned long b7  : 1;
			unsigned long b8  : 1;
			unsigned long b9  : 1;
			unsigned long b10 : 1;
			unsigned long b11 : 1;
			unsigned long b12 : 1;
			unsigned long b13 : 1;
			unsigned long b14 : 1;
			unsigned long b15 : 1;
			unsigned long _reserved : 16;
		} BITS;
	}IDR;


	union
	{
		unsigned long REG;
		struct
		{
			unsigned long b0  : 1;
			unsigned long b1  : 1;
			unsigned long b2  : 1;
			unsigned long b3  : 1;
			unsigned long b4  : 1;
			unsigned long b5  : 1;
			unsigned long b6  : 1;
			unsigned long b7  : 1;
			unsigned long b8  : 1;
			unsigned long b9  : 1;
			unsigned long b10 : 1;
			unsigned long b11 : 1;
			unsigned long b12 : 1;
			unsigned long b13 : 1;
			unsigned long b14 : 1;
			unsigned long b15 : 1;
			unsigned long _reserved : 16;
		} BITS;
	}ODR;

    union
    {
        unsigned long REG;
        struct
        {
            struct
            {
                unsigned short b0  : 1;
                unsigned short b1  : 1;
                unsigned short b2  : 1;
                unsigned short b3  : 1;
                unsigned short b4  : 1;
                unsigned short b5  : 1;
                unsigned short b6  : 1;
                unsigned short b7  : 1;
                unsigned short b8  : 1;
                unsigned short b9  : 1;
                unsigned short b10 : 1;
                unsigned short b11 : 1;
                unsigned short b12 : 1;
                unsigned short b13 : 1;
                unsigned short b14 : 1;
                unsigned short b15 : 1;
            } BSR;

            struct
            {
                unsigned short b0  : 1;
                unsigned short b1  : 1;
                unsigned short b2  : 1;
                unsigned short b3  : 1;
                unsigned short b4  : 1;
                unsigned short b5  : 1;
                unsigned short b6  : 1;
                unsigned short b7  : 1;
                unsigned short b8  : 1;
                unsigned short b9  : 1;
                unsigned short b10 : 1;
                unsigned short b11 : 1;
                unsigned short b12 : 1;
                unsigned short b13 : 1;
                unsigned short b14 : 1;
                unsigned short b15 : 1;
            } BR;
        };
    }BSRR;


	union
	{
		unsigned long REG;
		struct
		{
			unsigned long b0  : 1;
			unsigned long b1  : 1;
			unsigned long b2  : 1;
			unsigned long b3  : 1;
			unsigned long b4  : 1;
			unsigned long b5  : 1;
			unsigned long b6  : 1;
			unsigned long b7  : 1;
			unsigned long b8  : 1;
			unsigned long b9  : 1;
			unsigned long b10 : 1;
			unsigned long b11 : 1;
			unsigned long b12 : 1;
			unsigned long b13 : 1;
			unsigned long b14 : 1;
			unsigned long b15 : 1;
			unsigned long _reserved : 16;
		} BITS;
	}BRR;

	union
	{
		unsigned long REG;
		struct
		{
			unsigned long b0  : 1;
			unsigned long b1  : 1;
			unsigned long b2  : 1;
			unsigned long b3  : 1;
			unsigned long b4  : 1;
			unsigned long b5  : 1;
			unsigned long b6  : 1;
			unsigned long b7  : 1;
			unsigned long b8  : 1;
			unsigned long b9  : 1;
			unsigned long b10 : 1;
			unsigned long b11 : 1;
			unsigned long b12 : 1;
			unsigned long b13 : 1;
			unsigned long b14 : 1;
			unsigned long b15 : 1;
			unsigned long LOCK : 1;
			unsigned long _reserved : 15;
		} BITS;
	}LCKR;

} GPIO_TypeDef;
#define GPIOC ((GPIO_TypeDef *)0x40011000)
#define RCC_APB2ENR     (*((volatile unsigned long *)0x40021018))
#define RCC_IOPCEN      (1 << 4)
#endif /* MAIN_H_ */
