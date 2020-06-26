#include <stdio.h>
void main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 2, 3, };
	int arr3[5] = { 1, 2, 3 };
	int arr4[] = { 1, 2, 3 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr4[i]);
	}
	printf("\n");

	printf("arr1의 크기는 %d \n", sizeof(arr1));
	printf("arr2의 크기는 %d \n", sizeof(arr2));
	printf("arr3의 크기는 %d \n", sizeof(arr3));
	printf("arr4의 크기는 %d \n", sizeof(arr4));


}