#include <stdio.h>

int main(void)
{
	char name[20];
	int c;
	int java;

	printf("�̸�, ����� ����, �ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%s %d %d", name, &c, &java);

	printf("�̸� : %s, ����� ���� : %d, �ڹ� ���� %d \n", name, c, java);
}