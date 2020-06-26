#include <stdio.h>

void main(void)
{
	int a = 3, b = 4;
	if (5 > 3 && b > a)
	{
		printf("첫 번째 if는 참 \n");
	}

	if (4 > 3 || b > a)
		printf("두 번째 if는 참 \n");

	if (!(a > b))
	{
		printf("세 번째 if는 참 \n");
	}

}