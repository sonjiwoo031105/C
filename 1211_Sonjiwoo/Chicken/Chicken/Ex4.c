#include <stdio.h>
void main(void)
{
	int num = 5;
	int shift;
	printf("쉬프트할 값 입력: ");
	scanf_s("%d", &shift);
	printf("5를 왼쪽으로 %d만큼 왼쪽으로 shift하면 %d입니다.\n", shift, 5 << shift);
}