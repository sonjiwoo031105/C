#include <stdio.h>

void main(void)
{
	int* ptr[4];

	int str0[] = { 1,2,3,4 };
	int str1[] = { 5,6,7,8,9,10 };
	int str2[] = { 11,12 };
	int str3[] = { 13,14,15,16 };

	ptr[0] = str3; ptr[1] = str2;
	ptr[2] = str1; ptr[3] = str0;

	printf("%d \n", ptr[2][3]);
	printf("%d \n", ptr[3][1]);
	printf("%d \n", ptr[2][5]);
	printf("%d \n", ptr[0][3]);
}