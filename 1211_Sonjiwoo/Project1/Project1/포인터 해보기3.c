//배열의 원소들을 모두 출력하는 함수를 작성하시오
#include <stdio.h>

void PrintArray(int* arr, int size);

void main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	
	PrintArray(arr, sizeof(arr)/sizeof(int));
}
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d \n", arr[i]);
}