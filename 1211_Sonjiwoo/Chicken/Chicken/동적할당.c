#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int count;
	int* ptr;

	printf("���ϴ� int������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &count);

	ptr = (int*)malloc(sizeof(int) * count);
	free(ptr);
}