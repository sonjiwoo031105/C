#include <stdio.h>

void PrintArray(int* arr, int size);

void main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int count;
	printf("����ϰ� ���� ������ ������? : ");
	scanf_s("%d", &count);

	PrintArray(arr, count);
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");
}