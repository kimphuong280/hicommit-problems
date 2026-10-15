#include <stdio.h>
int main()
{
	int distance=547000, order_value=8 ;
	if ( distance<=0 && order_value <0)
	{
		printf(" INVALID");
	}
	else if ( order_value >=500000 && distance<15)
	{
		printf("0");
	}
	else if (" order_value <500000 && 1<=distance<=5")
	{
		printf("15000");
	}
		else if (" order_value <500000 && 6<=distance<=15")
	{
		printf("25000");
	}
	else
	{
		printf("40000");
	}
	return 0;
}