#include <stdio.h>

void main(void)
{
	int a = 3, b = 1;
	int x, y;

	x = !(a > b);
	y = ((a == b) && (a < b)) == (a > b || a == b);
	printf("x�� %d \n", x);
	printf("y�� %d \n", y);
}