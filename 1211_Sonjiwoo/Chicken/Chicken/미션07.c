#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char a = 'S';
	printf("%d \n", a); //83으로 출력.
	a += 45;
	// 83 + 45 => 127이 최대이므로 -128출력
	printf("%d \n", a);

}