#include <stdio.h>

void Call_By_Pointer(int* num);

void main(void)
{
	int val = 3;
	printf("�ٲٱ� �� %d \n", val);
	Call_By_Pointer(&val);
	printf("�ٲٱ� �� %d \n", val);
}

void Call_By_Pointer(int* num)
{
	*num = 5;
}