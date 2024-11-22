## Blink LED

enable CLK PORT C

    RCC_APB2ENR |= RCC_IOPCEN;


config OUTPUT PC13

![alt text](image.png)

	GPIOC->CRH.BITS.MODE_13 = 3;

Config I/O Port

![alt text](image-1.png)

	GPIOC->CRH.BITS.CNF_13 = 0;
**Note: ** You should make such as:

 	GPIOC->CRH.REG |= 1UL << 20 | 1UL << 21;
 	GPIOC->CRH.REG &= ~(1 <<22) & ~(1 << 23);

If you write something like GPIOC->CRH.BITS.MODE_13 = 3; or GPIOC->CRH.BITS.CNF_13 = 0; it will lead to writing incorrect values.

Blink Led with ODR register

    GPIOC->ODR.REG |= 1 << 13; // register 
    GPIOC->ODR.REG &= ~(1 << 13);

Blink Led with BSRR register

    GPIOC->BSRR.REG = (1UL << 13);
    delay_ms(100);
    GPIOC->BSRR.REG = (1UL << (13 + 16));
    delay_ms(100);

**Note:** Error when use BSRR.REG.BSR.b13 = 1 and BSRR.REG.BR.b13 = 1. I don't known what happened, but It's not work.I think the error occurs when writing to memory with unsigned short,and it writes with a word instead. I think this is the issue.