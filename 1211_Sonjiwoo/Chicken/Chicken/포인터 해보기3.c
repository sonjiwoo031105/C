#include <stdio.h>
//�迭�� ���ҵ��� ��� ����ϴ� �Լ��� �ۼ��Ͻÿ�


void PrintArray(int* arr, int size);

void main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	PrintArray(arr, sizeof(arr) / sizeof(int));
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}