#include <stdio.h>
 
void main(void)
{
	int arr[4] = { 10,20,30,40 };
	char str[4] = "ACE";

	printf("arr�� 0��° ���� %d %d \n", arr[0], *arr);
	printf("arr�� 1��° ���� %d %d \n", arr[1], *(arr+1);

	printf("str�� 0��° ���� %p \n", str[0]);
	printf("str�� 1��° ���� %p \n", str[1]);
}