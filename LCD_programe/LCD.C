#include<reg51.h>
sbit rs=P1^0;
sbit en=P1^1;
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

void lcd_data(unsigned char abc)
{
	rs=1;
	P2=abc;
	en=1;
	delay(50);
	en=0;
}
void lcd_cmd(unsigned char abc)
{
	rs=0;
	P2=abc;
	en=1;
	delay(50);
	en=0;
}
void main()
{
	lcd_cmd(0x38);
	lcd_cmd(0x02);
	lcd_cmd(0x01);
	lcd_cmd(0x0C);
	lcd_cmd(0x06);
	lcd_cmd(0x85);
	
	
	lcd_data('w');
	lcd_data('e');
	lcd_data('l');
	lcd_data('c');
	lcd_data('o');
	lcd_data('m');
	lcd_data('e');
	while(1)
	{
		
	}
}