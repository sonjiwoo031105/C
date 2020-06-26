#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int count;
	int* ptr;

	printf("원하는 int공간의 갯수를 입력하시오 : ");
	scanf_s("%d", &count);

	ptr = (int*)malloc(sizeof(int) * count);
	free(ptr);
}