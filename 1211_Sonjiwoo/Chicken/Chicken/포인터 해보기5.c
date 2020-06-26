//배열을 역순으로 정렬하시오
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int* ptr, int size);
void PrintArray(int* arr, int size);
void Swap(int* i, int* j);

void main(void)
{
	srand(time(NULL));
	int arr[4] = { 
		rand()%100, rand()%100,
		rand()%100, rand()%100 };
	BubbleSort(arr, sizeof(arr) / sizeof(int));
	PrintArray(arr, sizeof(arr) / sizeof(int));
}

void BubbleSort(int* ptr, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (ptr[i] > ptr[j])
			{
				Swap(ptr + i, ptr + j);
			}
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