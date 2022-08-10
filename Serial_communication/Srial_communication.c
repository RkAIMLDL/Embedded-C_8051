#include<reg51.h>
sbit led=P1^0;
void delay(unsigned int count)
{
	unsigned i=115;
	while(count)
	{
		while(i>0)
			i--;
		count--;
	}
	
}

void uart_init()
{
	TMOD=(0x20);
	SCON=(0x50);
	TH1=(0xFD);
	TL1=(0xFD);
	TR1=1;
}
void uart_write(unsigned char dat)
{
	SBUF=dat;
	while(TR1==0);
	TR1=0;
}
void uart_write_text(unsigned char *dat)
{
	while(*dat)
	{
		uart_write(*dat);
		dat++;
	}
}
unsigned char uart_read()
{
	while(RI==0);
	RI=0;
	return SBUF;
}
void main()
{
	uart_init();
	uart_write_text("Hello world");
	while(1)
	{
		unsigned char a=uart_read();
		delay(1000);
		uart_write(a+1);
	}
	
}