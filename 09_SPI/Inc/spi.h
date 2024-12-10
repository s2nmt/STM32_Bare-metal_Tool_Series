/*
 * spi.h
 *
 *  Created on: Dec 9, 2024
 *      Author: Minh Tuan
 */

#ifndef SPI_H_
#define SPI_H_

typedef struct {

	union {
		unsigned long REG;
		struct {
			unsigned long CPHA     		: 1;
			unsigned long CPOL     		: 1;
			unsigned long MSTR     		: 1;
			unsigned long BR       		: 3;
			unsigned long SPE      		: 1;
			unsigned long LSBFIRST      : 1;
			unsigned long SSI     		: 1;
			unsigned long SSM     		: 1;
			unsigned long RXONLY     	: 1;
			unsigned long DFF     		: 1;
			unsigned long CRCNEXT       : 1;
			unsigned long CRCEN         : 1;
			unsigned long BIDIOE        : 1;
			unsigned long BIDIMODE      : 1;
			unsigned long reserved      : 16;
		}BITS;
	} SPI_CR1;

	union {
		unsigned long REG;
		struct {
			unsigned long RXDMAEN     	: 1;
			unsigned long TXDMAEN     	: 1;
			unsigned long SSOE     		: 1;
			unsigned long reserved      : 2;
			unsigned long ERRIE      	: 1;
			unsigned long RXNEIE        : 1;
			unsigned long TXEIE     	: 1;
			unsigned long reserved1     : 24;
		}BITS;
	} SPI_CR2;

	union {
		unsigned long REG;
		struct {
			const unsigned long RXNE     		: 1;
			const unsigned long TXE     		: 1;
			const unsigned long CHSIDE     	    : 1;
			const unsigned long UDR      		: 1;
			unsigned long CRCERR      			: 1;
			const unsigned long MODF         	: 1;
			const unsigned long OVR     		: 1;
			const unsigned long BSY     		: 1;
			const unsigned long reserved1       : 24;
		}BITS;
	} SPI_SR;

	union {
		unsigned long REG;
		struct {
			unsigned long DR     		 : 16;
			unsigned long reserved       : 16;
		}BITS;
	} SPI_DR;

	union {
		unsigned long REG;
		struct {
			unsigned long CRCPOLY       : 16;
			unsigned long reserved      : 16;
		}BITS;
	} SPI_CRCPR;

	union {
		unsigned long REG;
		struct {
			const unsigned long RxCRC     	: 16;
			const unsigned long reserved      : 16;
		}BITS;
	} SPI_RXCRCR;

	union {
		unsigned long REG;
		struct {
			const unsigned long TxCRC        : 16;
			const unsigned long reserved     : 16;
		}BITS;
	} SPI_TXCRCR;

	union {
		unsigned long REG;
		struct {
			unsigned long CHLEN     		: 1;
			unsigned long DATLEN     		: 2;
			unsigned long CKPOL     		: 1;
			unsigned long I2SSTD     		: 2;

			unsigned long reserved     		: 1;
			unsigned long PCMSYNC     		: 1;
			unsigned long I2SCFG     		: 2;
			unsigned long I2SE     			: 1;
			unsigned long I2SMOD     		: 1;
			unsigned long reserved1     	: 20;
		}BITS;
	} SPI_I2SCFGR;

	union {
		unsigned long REG;
		struct {
			unsigned long I2SDIV     		: 8;
			unsigned long ODD     			: 1;
			unsigned long MCKOE     		: 1;
			unsigned long reserved      	: 22;
		}BITS;
	} SPI_I2SPR;
} SPI_TypeDef;

#define SPI1  ((SPI_TypeDef *) 0x40013000)
#endif /* SPI_H_ */
