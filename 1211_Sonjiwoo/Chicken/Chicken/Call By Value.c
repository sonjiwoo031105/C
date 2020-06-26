#include <stdio.h>

void Call_By_Value(int num);

void main(void)
{
	int val = 3;
	printf("바꾸기 전 %d \n", val);
	Call_By_Value(val);
	printf("바꾸기 후 %d \n", val);
}

void Call_By_Value(int num)
{
	num = 5;
}