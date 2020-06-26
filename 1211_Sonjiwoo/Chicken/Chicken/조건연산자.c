#include <stdio.h>

void main(void)
{
	int a = 10, b = 20;
	
	int c = a > b ? a : b;
	printf("%d \n", c);

	int d;
	if (a > b)
	{
		d = a;
	}
	else 
	{
		d = b;
	}
	printf("d \n", d);
	
}