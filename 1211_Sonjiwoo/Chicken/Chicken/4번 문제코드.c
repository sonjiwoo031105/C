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
			rand() % 100, rand() % 100,
			rand() % 100, rand() % 100 };
	Bubble
	}
}
void Swap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}