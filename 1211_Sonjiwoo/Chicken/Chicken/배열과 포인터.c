#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double b = 3.0f;

	int* pi = &i;
	char* pc = &c;
	double* pb = &b;

	printf("%p %p %p \n", pi, pc, pb);
	printf("%p %p %p \n", pi+1, pc+1, pb+1);
	printf("%p %p %p \n", &i+1, &c+1, &b+1);

	printf("%d %d %f \n", i, c, b);
	printf("%d %d %f \n", i + 1, c + 1. ,b + 1.f);

}