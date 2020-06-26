//5�� 1�� ��ġ�� �ٲٴ� �Լ��� �ۼ��Ͻÿ�
#include <stdio.h>

void PrintArray(int* arr, int size);
void Swap(int* i, int* j);

void main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	Swap(arr + 0, arr + 4); //Swap(&arr[0] , &arr[4])
	PrintArray(arr, sizeof(arr) / sizeof(int));
}

void Swap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}