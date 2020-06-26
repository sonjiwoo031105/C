#include <stdio.h>

int val = 0;

void func1(void)
{
	printf("func안에서 val 값 %d \n", val);
}

void main(void)
{
	int val = 3;
	printf("main안에서 val 값 %d \n", val);
	func1();
}