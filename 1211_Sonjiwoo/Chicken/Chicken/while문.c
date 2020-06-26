#include <stdio.h>

void main(void)
{
	int i = 1;
	while (i > 0) {
		printf("양의 정수: ");
		scanf_s("%d", &i);
	}
	printf("잘못 입력했습니다.");
	return 0;
}