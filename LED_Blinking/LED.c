#include<reg51.h>
sbit led= P2^0;
void delay(unsigned int count)
{
	unsigned int i;
	while(count)
	{
		for(i=0;i<count;i++);
		
	}
}

void main()
{ 
	while(1)
	{
		
		led=0;
		delay(1000);
		led=1;
		delay(1000);
	}
}

	