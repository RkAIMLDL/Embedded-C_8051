#include<reg51.h>
sbit led=P2^0;

time_delay(long itime)
{ 
	long i;
	for(i=0;i<itime;i++)
	{
	TMOD=0x00;
	TH0=0xFD;
	TL0=0x17;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
	}
}
void main()
{
	led=0;
	{
	led=1;
	time_delay(100);//millisecond
	led=0;
	time_delay(200);
	}
}