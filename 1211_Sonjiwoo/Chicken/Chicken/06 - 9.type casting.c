#include <stdio.h>

void main(void)
{
	int a = 1;
	char b = 2;
	float c = 3.3;
	double d = 4.8;
	printf("1�� %d����Ʈ \n", sizeof(1));
	printf("3.3�� %d����Ʈ \n", sizeof(3.3));
	printf("int+char�� %d����Ʈ \n", sizeof(a + b));
	printf("int+double�� %d����Ʈ \n", sizeof(a + d));
	printf("int+float�� %d����Ʈ \n", sizeof(a + c));
	// ����� ����ȯ
	printf("%f %d \n", c + d, (int)c + (int)d);
}