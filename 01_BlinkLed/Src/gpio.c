/*
 * gpio.c
 *
 *  Created on: Nov 21, 2024
 *      Author: Minh Tuan
 */

#include "gpio.h"
unsigned int reset1;
unsigned int set1;

/*
 * There are two variables: set and reset.
 * - `set` is used to assign the value 1 to the register.
 * - `reset` is used to assign the value 0 to the register.
 * For GPIO < 8 the first loops to add it. When GPIO > 8,
 * `reset` = 0b111...111 and `set` = 0 to avoid changing CRH.
 *
 * After that, the mode is configured with the second loop and values are set for CRL.
 *
 * If GPIO >8 the fist loop is configured the mode, increments and when GPIO > 15,
 * the second loop sets `set` = 0 and reset = 0b111...111 avoiding changes to CRL.
 */
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
