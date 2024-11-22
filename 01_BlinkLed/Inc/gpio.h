/*
 * gpio.h
 *
 *  Created on: Nov 21, 2024
 *      Author: Minh Tuan
 */

#ifndef GPIO_H_
#define GPIO_H_

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


typedef enum
{
  GPIO_MODE_INPUT_ANALOG                = (0 << 2) | 0,
  GPIO_MODE_INPUT_FLOAT                 = (1 << 2) | 0,
  GPIO_MODE_INPUT_PULL                  = (2 << 2) | 0,

  GPIO_MODE_OUTPUT_PUSHPULL_10MHz       = (0 << 2) | 1,
  GPIO_MODE_OUTPUT_OPEN_10MHz           = (1 << 2) | 1,
  GPIO_MODE_AF_OUTPUT_PUSHPULL_10MHz    = (2 << 2) | 1,
  GPIO_MODE_AF_OUTPUT_OPEN_10MHz        = (3 << 2) | 1,

  GPIO_MODE_OUTPUT_PUSHPULL_2MHz        = (0 << 2) | 2,
  GPIO_MODE_OUTPUT_OPEN_2MHz            = (1 << 2) | 2,
  GPIO_MODE_AF_OUTPUT_PUSHPULL_2MHz     = (2 << 2) | 2,
  GPIO_MODE_AF_OUTPUT_OPEN_2MHz         = (3 << 2) | 2,

  GPIO_MODE_OUTPUT_PUSHPULL_50MHz       = (0 << 2) | 3,
  GPIO_MODE_OUTPUT_OPEN_50MHz           = (1 << 2) | 3,
  GPIO_MODE_AF_OUTPUT_PUSHPULL_50MHz    = (2 << 2) | 3,
  GPIO_MODE_AF_OUTPUT_OPEN_50MHz        = (3 << 2) | 3,
} GPIO_MODE;
void GPIO_Mode(volatile GPIO_TypeDef* GPIO, unsigned int PIN, GPIO_MODE Mode);
//==============================================================================================================================================================
/*Fast init GPIO by define, Example:
  GPIO_ModeHigh(&GPIOA, PIN_Clr(11) | PIN_Clr(12), PIN_OutAFOpen50(11) | PIN_OutAFOpen50(12));  //= GPIO_Mode(&GPIOA, BIT11 | BIT12, OUTPUT_AF_PUSHPULL_50MHZ);
  GPIO_ModeHigh(&GPIOB, PIN_Clr(0) | PIN_Clr(1), PIN_OutPush2(0) | PIN_OutPush2(1));            //= GPIO_Mode(&GPIOB, BIT1 | BIT2, OUTPUT_PUSHPULL_50MHZ);
*/
#define PIN_Clr(index)                            (0xFUL << (4 * (index % 8)))
#define PIN_OutPush10(index)                      (0x1UL << (4 * (index % 8)))
#define PIN_OutPush2(index)                       (0x2UL << (4 * (index % 8)))
#define PIN_OutPush50(index)                      (0x3UL << (4 * (index % 8)))
#define PIN_OutOpen10(index)                      (0x5UL << (4 * (index % 8)))
#define PIN_OutOpen2(index)                       (0x6UL << (4 * (index % 8)))
#define PIN_OutOpen50(index)                      (0x7UL << (4 * (index % 8)))
#define PIN_OutAFPush10(index)                    (0x9UL << (4 * (index % 8)))
#define PIN_OutAFPush2(index)                     (0xAUL << (4 * (index % 8)))
#define PIN_OutAFPush50(index)                    (0xBUL << (4 * (index % 8)))
#define PIN_OutAFOpen10(index)                    (0xDUL << (4 * (index % 8)))
#define PIN_OutAFOpen2(index)                     (0xEUL << (4 * (index % 8)))
#define PIN_OutAFOpen50(index)                    (0xFUL << (4 * (index % 8)))
#define PIN_InAnalog(index)                       (0x0UL << (4 * (index % 8)))
#define PIN_InFloat(index)                        (0x4UL << (4 * (index % 8)))
#define PIN_InPushDown(index)                  	  (0x8UL << (4 * (index % 8)))    //ODR.PIN = 0
#define PIN_InPushUp(index)                       (0x8UL << (4 * (index % 8)))    //ODR.PIN = 1
#define GPIO_ModeLow(GPIO, PIN_Clear, PIN_Mode)   (GPIO)->CRL.REG &= ~(PIN_Clear); (GPIO)->CRL.REG |= (PIN_Mode)        //for pin 0->7
#define GPIO_ModeHigh(GPIO, PIN_Clear, PIN_Mode)  (GPIO)->CRH.REG &= ~(PIN_Clear); (GPIO)->CRH.REG |= (PIN_Mode)        //for pin 8->15      //for pin 8->15

#endif /* GPIO_H_ */
