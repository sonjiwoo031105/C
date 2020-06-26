#include <stdio.h>

int global_val; //전역변수

void func1(int num)
{
	global_val = num;
}

void main(void)
{
	int local_val = 3; //main함수의 지역변수
	global_val = 0;
	printf("지역변수 값은 %d 전역번수 값은 %d \n", local_val, global_val);
	func1(8);
	printf("변경된 전역변수 값은 %d \n", global_val);
}