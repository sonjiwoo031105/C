#include <stdio.h>

void main(void)
{
	int arr[4];
	char str[4];

	printf("arr의 0번째 공간 %p %p \n", &arr[0], arr);
	printf("arr의 1번째 공간 %p %p \n", &arr[1], arr + 1);

	printf("str의 0번째 공간 %p %p \n", &str[0], str);
	printf("str의 1번째 공간 %p %p \n", &str[1], str + 1);
}