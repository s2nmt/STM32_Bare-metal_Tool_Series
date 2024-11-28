/*
 * bitband.h
 *
 *  Created on: Nov 28, 2024
 *      Author: Minh Tuan
 */

#ifndef BITBAND_H_
#define BITBAND_H_


#define BITBAND_ADDRESS(base_address, address, bit)             ((base_address) + ((((unsigned int)address) & 0xFFFFF) * 32) + ((bit) * 4))
#define BITBAND_SRAM_ADDRESS(address, bit)                      BITBAND_ADDRESS(0x22000000, ((unsigned int)address), (bit))
#define BITBAND_PERIPHERAL_ADDRESS(address, bit)                BITBAND_ADDRESS(0x42000000, ((unsigned int)address), (bit))

#define BITBAND_POINTER(base_address, address, bit)             (unsigned long*)(((base_address) + ((((unsigned int)address) & 0xFFFFF) * 32) + ((bit) * 4)))
#define BITBAND_SRAM_POINTER(address, bit)                      (unsigned int*)(BITBAND_ADDRESS(0x22000000, ((unsigned int)address), (bit)))
#define BITBAND_PERIPHERAL_POINTER(address, bit)                (unsigned int*)(BITBAND_ADDRESS(0x42000000, ((unsigned int)address), (bit)))

#endif /* BITBAND_H_ */
