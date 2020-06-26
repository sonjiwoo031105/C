#include <stdio.h>

int main(void)
{
	int a1 = 3;
	int a2 = 4, b2 = 5;
	a2 = b2;
	printf("%d \n", b2);
	printf("%d \n", a2);
}