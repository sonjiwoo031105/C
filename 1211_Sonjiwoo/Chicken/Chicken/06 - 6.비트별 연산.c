#include <stdio.h>

void main(void)
{
	int a = 10 & 3;
	int b = 14 | 5;
	int c = 7 ^ 9;
	int d = ~3;

	printf("a는%d b는%d c는%d \n", a, b, c);
	printf("d는 %d \n", d);

}