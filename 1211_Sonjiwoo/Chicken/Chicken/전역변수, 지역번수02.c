#include <stdio.h>

int val = 0;

void func1(void)
{
	printf("func�ȿ��� val �� %d \n", val);
}

void main(void)
{
	int val = 3;
	printf("main�ȿ��� val �� %d \n", val);
	func1();
}