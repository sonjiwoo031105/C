#include<stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	int** dptr = &ptr;

	printf("num�ȿ� ����ִ� �� %d \n", num);
	printf("num�� �޸� �ּҰ� %p \n", &num);
	printf("ptr�ȿ� ����ִ� �� %p \n", ptr);
	printf("ptr�� �޸� �ּҰ� %p \n", &ptr);
	printf("dptr�ȿ� ����ִ� �� %p \n", dptr);
	printf("dptr�� �޸� �ּҰ� %p \n", &dptr);

}