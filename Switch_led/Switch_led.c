#include<reg51.h>
sbit port=P2^0;
sbit swt=P2^1;
void delay(unsigned int x)
{
	unsigned int i;
	while(i<x)
	{
		i=0;
		i++;
	}
	
}
void main()
{
	while(1)
	{
		if(swt==1)
		{
			port=1;
			delay(1000);
			port=0;
		}
		else
			port=0;
	}
	delay(1000);
}	