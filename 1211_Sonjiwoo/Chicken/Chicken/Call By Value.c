#include <stdio.h>

void Call_By_Value(int num);

void main(void)
{
	int val = 3;
	printf("�ٲٱ� �� %d \n", val);
	Call_By_Value(val);
	printf("�ٲٱ� �� %d \n", val);
}

void Call_By_Value(int num)
{
	num = 5;
}