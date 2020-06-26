#include <stdio.h>
 
void main(void)
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "ACE";

	printf("arr의 0번째 공간 %d %d \n", arr[0], *arr);
	printf("arr의 1번째 공간 %d %d \n", arr[1], *(arr+1);

	printf("str의 0번째 공간 %p \n", str[0]);
	printf("str의 1번째 공간 %p \n", str[1]);
}