/*
 * i2c.h
 *
 *  Created on: Dec 6, 2024
 *      Author: Minh Tuan
 */

#ifndef I2C_H_
#define I2C_H_

typedef struct{
	union {
		unsigned long REG;
		struct {
			unsigned long PE		    	: 1;
			unsigned long SMBUS 	    	: 1;
			const unsigned long reserved    : 1;
			unsigned long SMBTYPE 	    	: 1;
			unsigned long ENARP 			: 1;
			unsigned long ENPEC 			: 1;
			unsigned long ENGC 		    	: 1;
			unsigned long NOSTRETCH 		: 1;
			unsigned long START 			: 1;
			unsigned long STOP		    	: 1;
			unsigned long ACK 		    	: 1;
			unsigned long POS 		    	: 1;
			unsigned long PEC 		    	: 1;
			unsigned long ALERT 			: 1;
			unsigned long reserved1     	: 1;
			unsigned long SWRST 			: 1;
			const unsigned long reserved2   : 16;
		}BITS;
	}I2C_CR1;

	union {
		unsigned long REG;
		struct {
			unsigned long FREQ		    : 6;
			unsigned long reserved      : 2;
			unsigned long ITERREN 	    : 1;
			unsigned long ITEVTEN 		: 1;
			unsigned long ITBUFEN 		: 1;
			unsigned long DMAEN 		: 1;
			unsigned long LAST 			: 1;
			unsigned long reserved1     : 19;
		}BITS;
	}I2C_CR2;

	union {
		unsigned long REG;
		struct {
			unsigned long ADD0		    : 1;
			unsigned long ADD71      	: 7;
			unsigned long ADD98	 	    : 2;
			unsigned long reserved 		: 5;
			unsigned long ADDMODE 		: 1;
			unsigned long reserved1     : 16;
		}BITS;
	}I2C_OAR1;

	union {
		unsigned long REG;
		struct {
			unsigned long ENDUAL		: 1;
			unsigned long ADD2      	: 7;
			unsigned long reserved1     : 24;
		}BITS;
	}I2C_OAR2;

	union {
		unsigned long REG;
		struct {
			unsigned long DR			: 8;
			unsigned long reserved1     : 24;
		}BITS;
	}I2C_DR;

	union {
		unsigned long REG;
		struct {
			unsigned long SB			: 1;
			unsigned long ADDR			: 1;
			unsigned long BTF			: 1;
			unsigned long ADD10			: 1;
			unsigned long STOPF			: 1;
			unsigned long reserved		: 1;
			unsigned long RxNE			: 1;
			unsigned long TxE     		: 1;
			unsigned long BERR     		: 1;
			unsigned long ARLO     		: 1;
			unsigned long AF     		: 1;
			unsigned long OVR     		: 1;
			unsigned long PECERR     	: 1;
			unsigned long reserved1		: 1;
			unsigned long TIMEOUT     	: 1;
			unsigned long SMBALERT     	: 1;
			unsigned long reserved2		: 16;
		}BITS;
	}I2C_SR1;

	union {
		unsigned long REG;
		struct {
			unsigned long MSL			: 1;
			unsigned long BUSY			: 1;
			unsigned long TRA			: 1;
			unsigned long reserved		: 1;
			unsigned long GENCALL		: 1;
			unsigned long SMBDEFAUL     : 1;
			unsigned long SMBHOST     	: 1;
			unsigned long DUALF     	: 1;
			unsigned long PEC     		: 8;
			unsigned long reserved2		: 16;
		}BITS;
	}I2C_SR2;

	union {
		unsigned long REG;
		struct {
			unsigned long CCR			: 12;
			unsigned long reserved		: 2;
			unsigned long DUTY			: 1;
			unsigned long FS    		: 1;
			unsigned long reserved2		: 16;
		}BITS;
	}I2C_CCR;
	union {
		unsigned long REG;
		struct {
			unsigned long TRISE			: 6;
			unsigned long reserved		: 26;
		}BITS;
	}I2C_TRISE;
} I2C_TypeDef;

#define I2C1  ((I2C_TypeDef *)0x40005400)
#endif /* I2C_H_ */
