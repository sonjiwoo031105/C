#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char a = 'S';
	printf("%d \n", a); //83���� ���.
	a += 45;
	// 83 + 45 => 127�� �ִ��̹Ƿ� -128���
	printf("%d \n", a);

}