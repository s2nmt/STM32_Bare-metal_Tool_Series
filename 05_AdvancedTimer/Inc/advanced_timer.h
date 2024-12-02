/*
 * advanced_timer.h
 *
 *  Created on: Nov 28, 2024
 *      Author: Minh Tuan
 */

#ifndef ADVANCED_TIMER_H_
#define ADVANCED_TIMER_H_

typedef struct{
	union {
		unsigned long REG;
		struct{
			unsigned long CEN 			: 1;
			unsigned long UDIS 			: 1;
			unsigned long URS 			: 1;
			unsigned long OPM 			: 1;
			unsigned long DIR 			: 1;
			unsigned long CMS 			: 2;
			unsigned long ARPE 			: 1;
			unsigned long CKD 			: 2;
			unsigned long _reserved 	: 22;
		}BITS;
	} TIMx_CR1;

	union {
		unsigned long REG;
		struct{
			unsigned long CCPC 			: 1;
			unsigned long _reserved1 	: 1;
			unsigned long CCUS 			: 1;
			unsigned long CCDS 			: 3;
			unsigned long TI1S 			: 1;
			unsigned long OIS1 			: 1;
			unsigned long OIS1N 		: 1;
			unsigned long OIS2 			: 1;
			unsigned long OIS2N 		: 1;
			unsigned long OIS3	 		: 1;
			unsigned long OIS3N 		: 1;
			unsigned long OIS4  		: 1;
			unsigned long _reserved2 	: 17;
		}BITS;
	} TIMx_CR2;

	union {
		unsigned long REG;
		struct{
			unsigned long SMS 			: 3;
			unsigned long _reserved1 	: 1;
			unsigned long TS 			: 3;
			unsigned long MSM 			: 1;
			unsigned long ETF 			: 4;
			unsigned long ETPS 			: 2;
			unsigned long ECE	 		: 1;
			unsigned long ETP 			: 1;
			unsigned long _reserved2 	: 16;
		}BITS;
	} TIMx_SMCR;

	union {
		unsigned long REG;
		struct{
			unsigned long UIE 			: 1;
			unsigned long CC1IE     	: 1;
			unsigned long CC2IE 		: 1;
			unsigned long CC3IE 		: 1;
			unsigned long CC4IE 		: 1;
			unsigned long COMIE 		: 1;
			unsigned long TIE	 		: 1;
			unsigned long BIE 			: 1;
			unsigned long UDE		 	: 1;
			unsigned long CC1DE		 	: 1;
			unsigned long CC2DE		 	: 1;
			unsigned long CC3DE		 	: 1;
			unsigned long CC4DE		 	: 1;
			unsigned long COMDE		 	: 1;
			unsigned long TDE		 	: 1;
			unsigned long _reserved1 	: 17;
		}BITS;
	} TIMx_DIER;

	union {
		unsigned long REG;
		struct{
			unsigned long UIF 			: 1;
			unsigned long CC1IF     	: 1;
			unsigned long CC2IF 		: 1;
			unsigned long CC3IF 		: 1;
			unsigned long CC4IF 		: 1;
			unsigned long COMIF 		: 1;
			unsigned long TIF	 		: 1;
			unsigned long BIF 			: 1;
			unsigned long _reserved1	: 1;
			unsigned long CC1DF		 	: 1;
			unsigned long CC2DF		 	: 1;
			unsigned long CC3DF		 	: 1;
			unsigned long CC4DF		 	: 1;
			unsigned long _reserved2 	: 19;
		}BITS;
	} TIMx_SR;

	union {
		unsigned long REG;
		struct{
			unsigned long UG 			: 1;
			unsigned long CC1G      	: 1;
			unsigned long CC2G  		: 1;
			unsigned long CC3G 	    	: 1;
			unsigned long CC4G 			: 1;
			unsigned long COMG  		: 1;
			unsigned long TG	 		: 1;
			unsigned long BG 			: 1;
			unsigned long _reserved1	: 24;
		}BITS;
	} TIMx_EGR;

	union {
		unsigned long REG;
		struct{
			unsigned long CC1S 			: 2;  //0
			unsigned long OC1FE      	: 1;  //2
			unsigned long OC1PE  		: 1;  //3
			unsigned long OC1M 	    	: 3;  //4
			unsigned long OC1CE 		: 1;  //7
			unsigned long CC2S  		: 2;  //8
			unsigned long OC2FE	 		: 1;  //10
			unsigned long OC2PE 		: 1;  //11
			unsigned long OC2M	 		: 3;  //12
			unsigned long OC2CE 		: 1;  //15
			unsigned long _reserved1	: 16;
		}BITS_OUTPUT;

		struct{
			unsigned long CC1S 			: 2;
			unsigned long IC1PSC      	: 2;
			unsigned long IC1F  		: 4;
			unsigned long CC2S 	    	: 2;
			unsigned long IC2PSC 		: 2;
			unsigned long IC2F  		: 4;
			unsigned long _reserved  	: 16;
		}BITS_INPUT;
	} TIMx_CCMR1;

	union {
		unsigned long REG;
		struct{
			unsigned long CC3S 			: 2;
			unsigned long OC3FE      	: 1;
			unsigned long OC3PE  		: 1;
			unsigned long OC3M 	    	: 3;
			unsigned long OC3CE 		: 1;
			unsigned long CC4S  		: 2;
			unsigned long OC4FE	 		: 1;
			unsigned long OC4PE 		: 1;
			unsigned long OC4M	 		: 3;
			unsigned long OC4CE 		: 1;
			unsigned long _reserved1	: 16;
		}BITS_OUTPUT;

		struct{
			unsigned long CC3S 			: 2;
			unsigned long IC3PSC      	: 2;
			unsigned long IC3F  		: 4;
			unsigned long CC4S 	    	: 2;
			unsigned long IC4PSC 		: 2;
			unsigned long IC4F  		: 4;
			unsigned long _reserved  	: 16;
		}BITS_INPUT;
	} TIMx_CCMR2;

	union {
		unsigned long REG;
		struct{
			unsigned long CC1E 			: 1;
			unsigned long CC1P      	: 1;
			unsigned long CC1NE  		: 1;
			unsigned long CC1NP 	    : 1;
			unsigned long CC2E 			: 1;
			unsigned long CC2P  		: 1;
			unsigned long CC2NE	 		: 1;
			unsigned long CC3E	 		: 1;
			unsigned long CC3P	 		: 1;
			unsigned long CC3NE 		: 1;
			unsigned long CC3NP 		: 1;
			unsigned long CC4E 			: 1;
			unsigned long CC4P 			: 1;
			unsigned long _reserved1 	: 1;
			unsigned long CC4NP 		: 1;
			unsigned long _reserved2	: 16;
		}BITS;
	} TIMx_CCER;

	union {
		unsigned long REG;
		struct{
			unsigned long CNT 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_CNT;

	union {
		unsigned long REG;
		struct{
			unsigned long PSC 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_PSC;

	union {
		unsigned long REG;
		struct{
			unsigned long ARR 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_ARR;

	union {
		unsigned long REG;
		struct{
			unsigned long REP 			: 8;
			unsigned long _reserved1	: 24;
		}BITS;
	} TIMx_RCR;

	union {
		unsigned long REG;
		struct{
			unsigned long CCR1 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_CCR1;

	union {
		unsigned long REG;
		struct{
			unsigned long CCR2 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_CCR2;

	union {
		unsigned long REG;
		struct{
			unsigned long CCR3 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_CCR3;

	union {
		unsigned long REG;
		struct{
			unsigned long CCR4 			: 16;
			unsigned long _reserved1	: 16;
		}BITS;
	} TIMx_CCR4;

	union {
		unsigned long REG;
		struct{
			unsigned long DBA 			: 5;
			unsigned long _reserved1	: 3;
			unsigned long DBL 			: 5;
			unsigned long _reserved2	: 19;
		}BITS;
	} TIMx_BDTR;

	union {
		unsigned long REG;
		struct{
			unsigned long DT 			: 8;
			unsigned long LOCK			: 2;
			unsigned long OSSI 			: 1;
			unsigned long OSSR 			: 1;
			unsigned long BKE 			: 1;
			unsigned long BKP 			: 1;
			unsigned long AOE 			: 1;
			unsigned long MOE 			: 1;
			unsigned long _reserved 	: 16;
		}BITS;
	} TIMx_DCR;

	union {
		unsigned long DMAB;
	} TIMx_DMAR;
} Advanced_Timer_TypeDef;

#define TIM1 ((Advanced_Timer_TypeDef *)0x40012C00)

#endif /* ADVANCED_TIMER_H_ */
