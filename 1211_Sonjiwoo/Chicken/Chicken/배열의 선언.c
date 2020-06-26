#include<stdio.h>

void main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 };

	printf("%d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

	arr1[3] = 40;
	printf("%d \n", arr1[3]);
}