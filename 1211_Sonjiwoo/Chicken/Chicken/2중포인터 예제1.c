#include<stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	int** dptr = &ptr;

	printf("num안에 들어있는 값 %d \n", num);
	printf("num의 메모리 주소값 %p \n", &num);
	printf("ptr안에 들어있는 값 %p \n", ptr);
	printf("ptr의 메모리 주소값 %p \n", &ptr);
	printf("dptr안에 들어있는 값 %p \n", dptr);
	printf("dptr의 메모리 주소값 %p \n", &dptr);

}