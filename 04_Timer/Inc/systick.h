/*
 * systick.h
 *
 *  Created on: Nov 27, 2024
 *      Author: bestdevever
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

typedef struct
{
  union
  {
    unsigned long REG;
    struct
    {
      unsigned long ENABLE              : 1;
      unsigned long TICK_INT            : 1;
      unsigned long CLK_SOURCE          : 1;
      unsigned long _reserved           : 13;
      unsigned long COUNT_FLAG          : 1;
      unsigned long _reserved1          : 15;
    } BITS;
  } CTRL;
  unsigned long LOAD ;
  unsigned long VAL  ;

  const union
  {
    unsigned long REG;
    struct
    {
      unsigned long TENMS              : 24;
      unsigned long _reserved4         : 6;
      unsigned long SKEW               : 1;
      unsigned long NOREF              : 1;
    } BITS;
  } CALIB;
} STK_TypeDef;

#define STK             (*((STK_TypeDef*)0xE000E010))
#endif /* SYSTICK_H_ */
