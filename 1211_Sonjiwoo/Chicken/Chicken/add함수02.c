#include <stdio.h>

//정수형 반환
int sum(int num1, int num2)
{
	return num1 + num2;
	//여기서 끝남
	printf("HELLO WORLD \n");
	//무시됨
}

//반환하지 않음 (반환형에 되도록이면 void 적어줄 것)
void sum2(int num1, int num2)//void는 반환형이 없음
{
	int val = num1 + num2;
	//return; //여기서 끝남
	printf("%d \n", val);
}

void main(void)
{
	int a = 1;
	int c;
	c = sum(a, 2);
	printf("c의 값은 %d \n", c);

	sum2(2, 3);
}