#include <stdio.h>
void main(void)
{
	int num1 = 3, num2 = 30;
	printf("num1�ȿ� ����ִ� �� %d \n", num1);
	printf("num2�ȿ� ����ִ� �� %d \n", num2);

	int* ptr = &num1;
	*ptr = 4;
	ptr = &num2;
	*ptr = 40;

	printf("num1�ȿ� ����ִ� �� %d \n", num1);
	printf("num2�ȿ� ����ִ� �� %d \n", num2);
}