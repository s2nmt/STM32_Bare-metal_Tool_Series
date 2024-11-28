# 04 SysTick

![alt text](image.png)

	STK.VAL = 100; // write any value to reset counter
	STK.LOAD = 7999999; // 1s

frequency = (7999999 + 1)/8000000 = 1 s

![alt text](image-2.png)

STK.VAL: If you write any value to reset counter and clear the COUNTERFLAG

![alt text](image-1.png)

    STK.CTRL.REG |= (1 << 2) | (1 << 1) | 1;

![alt text](image-3.png)