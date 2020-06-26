#include <stdio.h>

void main(void)
{
	int a = 3, b = 1;
	int x, y;

	x = !(a > b);
	y = ((a == b) && (a < b)) == (a > b || a == b);
	printf("x´Â %d \n", x);
	printf("y´Â %d \n", y);
}