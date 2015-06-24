#include<avr/io.h>
#include<util/delay.h>
int main()
{	DDRB=255;
	DDRC=0;
	int ch;
    int flag=0;
	while(1)
	{
		ch=PINC&0b0000011;
		if (ch==3)
		{
			PORTB=18;
		}
	    if(ch==2)
		{
			PORTB=16;
		}
	    if(ch==1)
		{
			PORTB=2;
		}
		if(ch==0&&flag==0)
		{
			PORTB=18;
                        flag++;
                if(ch==0&&flag==1)
		{
			PORTB=0;
		}
		}
	}
	return(0);
}
