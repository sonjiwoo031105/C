#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	int* ptr = arr;

	printf("%d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]);
	printf("%d %d %d %d \n", ptr[0], ptr[1], ptr[2], ptr[3]);
	printf("%d %d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3));

	printf("배열의 크기 %d", sizeof(arr));
	printf("포인터의 크기 %d \v", sizeof(ptr));
}