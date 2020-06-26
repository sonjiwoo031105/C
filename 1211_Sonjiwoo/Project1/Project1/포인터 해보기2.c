#include <stdio.h>

void main(void)
{
	char* ptr[4];

	for (int i = 0; i < 4; i++)
		printf("%s \n", ptr[i]);
}