#include <stdio.h>

void main(void)
{
	int arr[4];
	char str[4];

	printf("arr�� 0��° ���� %p %p \n", &arr[0], arr);
	printf("arr�� 1��° ���� %p %p \n", &arr[1], arr + 1);

	printf("str�� 0��° ���� %p %p \n", &str[0], str);
	printf("str�� 1��° ���� %p %p \n", &str[1], str + 1);
}