#include <stdio.h>

int sum(int num1, int num2)
{
	return num1 + num2;
}

void main(void)
{
	int a = 1;
	int c;
	c = sum(a, 2);
	printf("c�� ���� %d \n", c);
}