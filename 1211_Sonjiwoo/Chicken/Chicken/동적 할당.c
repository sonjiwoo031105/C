#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 3;
	printf("%d \n", *ptr);
	free(ptr);
}