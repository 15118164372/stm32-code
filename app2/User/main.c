#include "stm32f10x.h"

typedef unsigned int u32;

void SystemInit()
{
	
}
void delay(u32 i){
	while(i--);
}

int main()
{
	RCC_APB2ENR|=1<<4;	//����GPIOC�˿�ʱ��
	
	
	GPIOC_CRL&=~(0x0f<<(4*0));	//0x1111Ҳ����0x0f
	GPIOC_CRL|=(3<<4*0);	//0x0011����0λ���00000011��Ȼ��͸ոյ�*****0000ȡ�򣬱����*****0011
	GPIOC_BSRR=(1<<(16+0));//BR0Ϊ1ʱ����������͵�ƽ������LED1
	
	GPIOC_CRL&=~(0x0f<<(4*1));
	GPIOC_CRL|=(3<<4*1);
	GPIOC_BSRR=(1<<(1));//LED2��
	
	GPIOC_CRL&=~(0x0f<<(4*2));
	GPIOC_CRL|=(3<<4*2);
	GPIOC_BSRR=(1<<(2));//LED3��
	
	GPIOC_CRL&=~(0x0f<<(4*3));
	GPIOC_CRL|=(3<<4*3);
	GPIOC_BSRR=(1<<(3));//LED4��
	
	GPIOC_CRL&=~(0x0f<<(4*4));
	GPIOC_CRL|=(3<<4*4);
	GPIOC_BSRR=(1<<(4));//LED5��
	
	GPIOC_CRL&=~(0x0f<<(4*5));
	GPIOC_CRL|=(3<<4*5);
	GPIOC_BSRR=(1<<(5));//LED6��
	
	GPIOC_CRL&=~(0x0f<<(4*6));
	GPIOC_CRL|=(3<<4*6);
	GPIOC_BSRR=(1<<(6));//LED7��
	
	GPIOC_CRL&=~(0x0f<<(4*7));
	GPIOC_CRL|=(3<<4*7);
	GPIOC_BSRR=(1<<(7));//LED8��
	while(1)
	{
		GPIOC_BSRR=(1<<(16+0));//LED1��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(0));//LED1��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+1));//LED2��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(1));//LED2��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+2));//LED3��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(2));//LED3��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+3));//LED4��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(3));//LED4��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+4));//LED5��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(4));//LED5��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+5));//LED6��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(5));//LED6��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+6));//LED7��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(6));//LED7��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(16+7));//LED8��
		delay(0xffff1);
		GPIOC_BSRR=(1<<(7));//LED8��
		delay(0xffff1);
	}
}



