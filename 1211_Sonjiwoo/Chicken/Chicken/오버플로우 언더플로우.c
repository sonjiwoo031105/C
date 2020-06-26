#include <stdio.h>

void main(void)
{
	char overflow = 0b01111111;
	printf("오버플로우 이전%d \n", overflow);
	overflow = overflow + 1;
	printf("오버플로우 이후%d \n\n", overflow);

	char underflow = -128;
	printf("언더플로우 이전%d \n", underflow);
	underflow = underflow - 1;
	printf("언더플로우 이후%d \n", underflow);
}