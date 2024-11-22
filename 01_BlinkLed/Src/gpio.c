/*
 * gpio.c
 *
 *  Created on: Nov 21, 2024
 *      Author: Minh Tuan
 */

#include "gpio.h"
unsigned int reset1;
unsigned int set1;
void GPIO_Mode(volatile GPIO_TypeDef* GPIO, unsigned int PIN, GPIO_MODE Mode)
{
  unsigned int reset = 0, set = 0;
  for (unsigned int i = 0; i < 8; i++)
  {
    reset <<= 4;
    set <<= 4;
    if (PIN & (1UL << 15))
      set |= Mode;
    else
      reset |= 0x0F;
    PIN <<= 1;
  }
  reset1 = reset;
  set1 = set;
  GPIO->CRH.REG &= reset;
  GPIO->CRH.REG |= set;

  reset = 0; set = 0;
  for (unsigned int i = 0; i < 8; i++)
  {
    reset <<= 4;
    set <<= 4;
    if (PIN & (1UL << 15))
      set |= Mode;
    else
      reset |= 0x0F;
    PIN <<= 1;
  }
  reset1 = reset;
  set1 = set;
  GPIO->CRL.REG &= reset;
  GPIO->CRL.REG |= set;
}
