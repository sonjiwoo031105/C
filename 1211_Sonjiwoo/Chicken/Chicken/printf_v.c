#include <stdio.h>
 
int sum(int num1, int num2)
{
	return num1 + num2;
}

int main() 
{
	int a, b;

	printf("반환값이 있고, 매개변수가 있는 경우");
	printf("두 수를 입력: ");
	scanf_s("%d %d", &a, &b);

	int result = 0;
	result = sum(a, b);

	printf("계산 결과 : %d \n", result);

	printf("반환값이 없고, 매개변수가 있는 경우");
	printf("두 수를 입력: ");
	scanf_s("%d %d", &a, &b);

	sum(a, b);

	printf("반환값이 있고, 매개변수가 없는 경우");
	printf("두 수를 입력: ");
	printf("계산 결과: %d \n", sum(a, b));

	printf("반환값이 없고, 매개변수가 없는 경우");
	sum(a, b);

	return 0;
}


