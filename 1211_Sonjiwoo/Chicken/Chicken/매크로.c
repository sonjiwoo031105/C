#include<stdio.h>
//���� ���̴µ� �ٲ��� ������ - ������
#define NORMAL 0
#define SOGOGI 1
#define CHEEZE 2
#define CHAMCHI 4

void main(void)
{
	int gimbab = NORMAL;

	if (gimbab == NORMAL)
		printf("������ �ּ���. \n");
	else if (gimbab == SOGOGI)
		printf("�Ұ���� �ּ���. \n");
	else if (gimbab == CHEEZE)
		printf("ġ���� �ּ���. \n");
	else if (gimbab == CHAMCHI)
		printf("��ġ��� �ּ���. \n");
}