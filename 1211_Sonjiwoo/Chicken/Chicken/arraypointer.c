#include <stdio.h>
void main(void)
{
	int arr[4];
	char str[4];

	printf("arr�� 0��° ���� %p %p \n", arr, &arr[0]);
	printf("arr�� 1��° ���� %p \n", &arr[1]);

	printf("str�� 0��° ���� %p %p \n", str, &str[0]);
	printf("str�� 1��° ���� %p \n", &str[1]);
}