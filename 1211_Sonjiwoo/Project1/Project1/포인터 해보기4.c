//5와 1의 위치를 바꾸는 함수를 작성하시오
#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* arr, int size);
void Swap(int* i, int* j);

void main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	Swap(&arr[0], &arr[4]);
	PrintArray(arr, sizeof(arr) / sizeof(int));
}

void PrintArray(int* arr, int size)
{
	printf("")
}

void Swap(int* i, int* j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}