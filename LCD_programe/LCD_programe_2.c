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
void lcd_init()
{
	lcd_cmd(0x38);
	lcd_cmd(0x01);
	lcd_cmd(0x06);
	lcd_cmd(0x0E);
	lcd_cmd(0x80);
	lcd_cmd(0xOC);
	
}
void clear_lcd()
{
	lcd_cmd(0x01)
}

void lcd_cursor(char row,char column)
{
	switch(row)
		case 1:
			lcd_comd(0x80+column-1);
		break;
		case 2:
			lcd_comd(0xc0+column-1);
		break;
		case 3:
			lcd_comd(0x94+column-1);
		break;
		case 4:
			lcd_comd(0xd4+column-1);
		break;
		default 
			break;
}
void lcd_out(char row,char column ,*str)
{
	lcd_cursor(row,coulum);
	while(*str!='\0')
	{
		lcd_data(*str);
		*str++
  }

void lcd_print(char row,char colum,unsigned int value,int digit)
{
	unsigned int temp;
	unsigned int unit;
	unsigned int thousand;
	unsigned int hundred;
	unsigned int milion;
	unsigned int flag;
	
	if (row=0 || colum=0)
	{
		lcd_cmd(0x80);
  }
	else
	{
		lcd_cursor(row,column);
	}
	while(1)
	{
		
	}
}