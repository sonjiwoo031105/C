#include <stdio.h>

void main(void)
{
	int average;
	printf("평균을 입력하시오: ");
	scanf_s("%d", &average);

	if (average >= 80) {
		printf("축하합니다.\n");
	}
	else {
		printf("분발하세요.\n");
	}
}