/*
 * uart.h
 *
 *  Created on: Dec 6, 2024
 *      Author: Minh Tuan
 */

#ifndef UART_H_
#define UART_H_

typedef struct {
	union{
		unsigned long REG;
		struct {
			const unsigned long PE      : 1;
			const unsigned long FE      : 1;
			const unsigned long NE      : 1;
			const unsigned long ORE    	: 1;
			const unsigned long IDLE    : 1;
			unsigned long RXNE      	: 1;
			unsigned long TC      		: 1;
			const unsigned long TXE     : 1;
			unsigned long LBD      		: 1;
			unsigned long CTS           : 1;
			unsigned long reserved      : 22;
		}BITS;
	} USART_SR;

	union{
		unsigned long REG;
		struct {
			unsigned long DR      		: 9;
			unsigned long reserved      : 23;
		}BITS;
	} USART_DR;

	union{
		unsigned long REG;
		struct {
			unsigned long DIV_Fraction    : 4;
			unsigned long DIV_Mantissa    : 12;
			unsigned long reserved        : 16;
		}BITS;
	} USART_BRR;

	union{
		unsigned long REG;
		struct {
			unsigned long SBK   		: 1;
			unsigned long RWU    		: 1;
			unsigned long RE    		: 1;
			unsigned long TE    		: 1;
			unsigned long IDLEIE   		: 1;
			unsigned long RXNEIE    	: 1;
			unsigned long TCIE    		: 1;
			unsigned long TXEIE   		: 1;
			unsigned long PEIE    		: 1;
			unsigned long PS    		: 1;
			unsigned long PCE    		: 1;
			unsigned long WAKE    		: 1;
			unsigned long M    			: 1;
			unsigned long UE    		: 1;
			unsigned long reserved      : 18;
		}BITS;
	} USART_CR1;

	union{
		unsigned long REG;
		struct {
			unsigned long ADD   		: 4;
			unsigned long reserved    	: 1;
			unsigned long LBDL    		: 1;
			unsigned long LBDIE    		: 1;
			unsigned long reserved1   	: 1;
			unsigned long LBCL	    	: 1;
			unsigned long CPHA    		: 1;
			unsigned long CPOL   		: 1;
			unsigned long CLKEN    		: 1;
			unsigned long STOP    		: 2;
			unsigned long LINEN    		: 1;
			unsigned long reserved2     : 17;
		}BITS;
	} USART_CR2;

	union{
		unsigned long REG;
		struct {
			unsigned long EIE   		: 1;
			unsigned long IREN       	: 1;
			unsigned long IRLP    		: 1;
			unsigned long HDSEL    		: 1;
			unsigned long NACK       	: 1;
			unsigned long SCEN	    	: 1;
			unsigned long DMAR    		: 1;
			unsigned long DMAT   		: 1;
			unsigned long RTSE    		: 1;
			unsigned long CTSE    		: 1;
			unsigned long CTSIE    		: 1;
			unsigned long reserved      : 21;
		}BITS;
	} USART_CR3;

	union{
		unsigned long REG;
		struct {
			unsigned long PSC   		: 8;
			unsigned long GT       		: 8;
			unsigned long reserved      : 16;
		}BITS;
	} USART_GTPR;
} USART_TypeDef;

#define USART1    ((USART_TypeDef*)0x40013800)
#endif /* UART_H_ */
