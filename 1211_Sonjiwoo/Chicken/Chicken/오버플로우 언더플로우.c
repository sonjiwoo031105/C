#include <stdio.h>

void main(void)
{
	char overflow = 0b01111111;
	printf("�����÷ο� ����%d \n", overflow);
	overflow = overflow + 1;
	printf("�����÷ο� ����%d \n\n", overflow);

	char underflow = -128;
	printf("����÷ο� ����%d \n", underflow);
	underflow = underflow - 1;
	printf("����÷ο� ����%d \n", underflow);
}