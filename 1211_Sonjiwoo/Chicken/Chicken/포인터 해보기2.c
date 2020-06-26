#include <stdio.h>

void main(void)
{
	char* ptr[4];

	char str0[] = "1";
	char str1[] = "11";
	char str2[] = "111";
	char str3[] = "1111";

	ptr[0] = str0; ptr[1] = str1;
	ptr[2] = str2; ptr[3] = str3;

	for (int i = 0; i < 4; i++)
		printf("%s \n", ptr[i]);
}