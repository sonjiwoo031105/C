#include <stdio.h>
void main(void)
{
	int num = 3;
	int* ptr = &num;
	*ptr = 4;

	printf("num�ȿ� ����ִ� �� %d \n", num);
	printf("num�� �޸� �ּҰ� %p \n", &num);
	printf("ptr�ȿ� ����̾� �� %p \n", ptr);
	printf("ptr�� ������ ������ �� %p \n", *ptr);
}