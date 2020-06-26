#include <stdio.h>

void main(void)
{
	int* parr[2];
	int num = 3;
	int* ptr = &num;
	int arr[4] = { 10, 20, 30, 40 };

	parr[0] = ptr;
	parr[1] = arr;

	printf("%d %d %d \n", *parr, parr[0], ptr);
	printf("%d %d %d %d %d \n", **parr, *parr[0], parr[0][0], *ptr, ptr[0]);
	printf("%d %d %d \n", *(parr + 1), parr[1], arr);
	printf("%d %d %d %d \n", *(*(parr + 1)), *(parr[1]), parr[1][0], arr[0]);
	printf("%d %d %d %d \n", *(*(parr + 1) + 1), *(parr[1] + 1), parr[1][1], arr[1]);
	printf("%d %d %d %d \n", *(*(parr + 1) + 2), *(parr[1] + 2), parr[1][2], arr[2]);
	printf("%d %d %d %d \n\n", *(*(parr + 1) + 3), *(parr[1] + 3), parr[1][3], arr[3]);
}