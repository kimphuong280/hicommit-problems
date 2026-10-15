#include <stdio.h>
#include <stdio.h>
int main()
{
	int distance=9;
	int order_value=55000 ;
	if ( distance<=0 && order_value <0)
	{
		printf("INVALID");
	}
	else if ( order_value >=500000 , distance<15)
	{
		printf("0");
	}
	else if ( order_value <500000 , 1<=distance<=5)
	{
		printf("15000");
	}
	else if ( order_value <500000 , distance<=15 && distance>=6)
	{
		printf("25000");
	}
	else
	{
		printf("40000");
	}
	return 0;
} 