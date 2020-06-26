#include <stdio.h>

void main()
{
	int num ;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	
	if (num > 10 && num < 20) {
		printf("숫자 %d(은)는 10보다 크고 20보다 작습니다.\n", num);
	}
	else 
	{
		printf("숫자 %d(은)는 조건에 부합하지 않습니다.\n", num);
	}
}