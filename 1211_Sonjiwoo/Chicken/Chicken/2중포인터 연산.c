#include <stdio.h>

void main(void)
{
	int i = 1; char c = 2; double b = 3.0f;
	int* pi = &i; char* pc = &c; double* pb = &b;
	int ** dpi = &pi; char** dpc = &pc; double** dpb = &pb;

	printf("%d %d %d \n", pi, pc, pb);
	printf("%d %d %d \n\n", pi + 1, pc + 1, pb + 1);

	printf("%d %d %d \n", dpi, dpc, dpb);
	printf("%d %d %d \n", dpi + 1, dpc + 1, dpb + 1);
}