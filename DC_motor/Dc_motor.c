#include<reg51.h>
void delay(unsigned int count)
{
	unsigned int i;
	for(;;)
	{
		i=0;
		i<count;
		i++;
	}
}
sbit inp1=P2^0;
sbit inp2=P2^1;
sbit enb1=P2^2;
sbit enb2=P2^3;
sbit inp3=P2^4;
sbit inp4=P2^5;

	
	
void main()
{
	inp1=0;
	inp2=0;
	inp3=0;
	inp4=0;
	enb1=1;
	enb2=1;
	while(1)
	{
		inp1=1;
		inp2=0;
		inp3=1;
		inp3=0;
		delay(2000);
		
		inp1=0;
		inp2=0;
		inp3=0;
		inp3=0;
		delay(100);
		
		inp1=0;
		inp2=1;
		inp3=0;
		inp3=1;
		delay(2000);
		delay(2000);
		
		inp1=0;
		inp2=0;
		inp3=0;
		inp3=0;
		delay(100);
		
		
	}
}	
			