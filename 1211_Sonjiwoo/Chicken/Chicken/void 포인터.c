#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	void* vptr = &num;

	printf("%p %p %p \n", &num, ptr, vptr);
	printf("%d %d \n", num, *ptr);
	//printf("%d \n", *vptr); //�����߻�
}