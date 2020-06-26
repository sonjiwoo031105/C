#include <stdio.h>

void main()
{
	int i = 1;
	while (i > 0)
	{
		printf("양의 정수를 입력하시오: ");
		scanf_s("%d", &i);
	}
	printf("잘못 입력하셨습니다.\n");
	return 0;
}