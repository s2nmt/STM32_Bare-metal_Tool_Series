/*
 * DMA.h
 *
 *  Created on: Dec 2, 2024
 *      Author: Minh Tuan
 */

#ifndef DMA_H_
#define DMA_H_

typedef struct {
	union {
		unsigned long REG;
		struct {
			const unsigned long GIF1    	  : 1;
			const unsigned long TCIF1   	  : 1;
			const unsigned long HTIF1   	  : 1;
			const unsigned long TEIF1   	  : 1;
			const unsigned long GIF2    	  : 1;
			const unsigned long TCIF2   	  : 1;
			const unsigned long HTIF2   	  : 1;
			const unsigned long TEIF2   	  : 1;
			const unsigned long GIF3    	  : 1;
			const unsigned long TCIF3   	  : 1;
			const unsigned long HTIF3   	  : 1;
			const unsigned long TEIF3   	  : 1;
			const unsigned long GIF4    	  : 1;
			const unsigned long TCIF4   	  : 1;
			const unsigned long HTIF4   	  : 1;
			const unsigned long TEIF4   	  : 1;
			const unsigned long GIF5    	  : 1;
			const unsigned long TCIF5   	  : 1;
			const unsigned long HTIF5   	  : 1;
			const unsigned long TEIF5   	  : 1;
			const unsigned long GIF6    	  : 1;
			const unsigned long TCIF6   	  : 1;
			const unsigned long HTIF6   	  : 1;
			const unsigned long TEIF6   	  : 1;
			const unsigned long GIF7          : 1;
			const unsigned long TCIF7   	  : 1;
			const unsigned long HTIF7   	  : 1;
			const unsigned long TEIF7   	  : 1;
			unsigned long _reserved   	      : 4;
		}BITS;
	} DMA_ISR;

	union {
		unsigned long REG;
		struct {
			unsigned long CGIF1    	  : 1;
			unsigned long CTCIF1   	  : 1;
			unsigned long CHTIF1   	  : 1;
			unsigned long CTEIF1   	  : 1;
			unsigned long CGIF2    	  : 1;
			unsigned long CTCIF2   	  : 1;
			unsigned long CHTIF2   	  : 1;
			unsigned long CTEIF2   	  : 1;
			unsigned long CGIF3    	  : 1;
			unsigned long CTCIF3   	  : 1;
			unsigned long CHTIF3   	  : 1;
			unsigned long CTEIF3   	  : 1;
			unsigned long CGIF4    	  : 1;
			unsigned long CTCIF4   	  : 1;
			unsigned long CHTIF4   	  : 1;
			unsigned long CTEIF4   	  : 1;
			unsigned long CGIF5    	  : 1;
			unsigned long CTCIF5   	  : 1;
			unsigned long CHTIF5   	  : 1;
			unsigned long CTEIF5   	  : 1;
			unsigned long CGIF6    	  : 1;
			unsigned long CTCIF6   	  : 1;
			unsigned long CHTIF6   	  : 1;
			unsigned long CTEIF6   	  : 1;
			unsigned long CGIF7       : 1;
			unsigned long CTCIF7   	  : 1;
			unsigned long CHTIF7   	  : 1;
			unsigned long CTEIF7   	  : 1;
			unsigned long _reserved   : 4;
		}BITS;
	} DMA_IFCR;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR1;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR1;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR1;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR1;

	unsigned long _RESERVED1;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR2;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR2;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR2;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR2;

	unsigned long _RESERVED2;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR3;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR3;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR3;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR3;

	unsigned long _RESERVED3;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR4;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR4;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR4;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR4;

	unsigned long _RESERVED4;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR5;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR5;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR5;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR5;

	unsigned long _RESERVED5;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR6;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR6;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR6;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR6;

	unsigned long _RESERVED6;

	union{
		unsigned long REG;
		struct {
			unsigned long EN        : 1;
			unsigned long TCIE      : 1;
			unsigned long HTIE      : 1;
			unsigned long TEIE      : 1;
			unsigned long DIR       : 1;
			unsigned long CIRC      : 1;
			unsigned long PINC      : 1;
			unsigned long MINC      : 1;
			unsigned long PSIZE     : 2;
			unsigned long M_SIZE    : 2;
			unsigned long PL	    : 2;
			unsigned long MEM2MEM   : 1;
			unsigned long _reserved : 17;
		}BITS;
	} DMA_CCR7;

	union{
		unsigned long REG;
		struct {
			unsigned long NDT        : 16;
			unsigned long _reserved  : 16;
		}BITS;
	} DMA_CNDTR7;

	union{
		unsigned long REG;
		struct {
			unsigned long PA        : 16;
		}BITS;
	} DMA_CPAR7;

	union{
		unsigned long REG;
		struct {
			unsigned long MA        : 16;
		}BITS;
	} DMA_CMAR7;

	unsigned long _RESERVED7;
} DMA_TypeDef;

#define DMA ((DMA_TypeDef *) 0x40020000)
#endif /* DMA_H_ */
