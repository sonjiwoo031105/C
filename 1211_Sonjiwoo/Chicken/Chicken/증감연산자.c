#include <stdio.h>

void main(void)
{
	int a, b, c = 0;
	a = ++c;
	printf("%d \n", c);
	b = c++;
	printf("%d \n", c);
	printf("%d %d %d \n", a, b, ++c);
}