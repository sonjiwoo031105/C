#include <stdio.h>

#define NORMAL 0
#define SOGOGI 1
#define CHEEZE 2
#define CHAMCHI 4

void PrintGimbab(int gimbab);

void main(void)
{
	int gimbab = CHAMCHI | CHEEZE;
	PrintGimbab(gimbab);

	gimbab = SOGOGI | CHEEZE;
	PrintGimbab(gimbab);
}

	void PrintGimbab(int gimbab) {
		if (gimbab == NORMAL)
			printf("������ �ּ���. \n");
		else if (gimbab == SOGOGI)
			printf("�Ұ���� �ּ���. \n");
		else if (gimbab == CHEEZE)
			printf("ġ���� �ּ���. \n");
		else if (gimbab == CHAMCHI)
			printf("��ġ��� �ּ���. \n");
		else if (gimbab == 6)
			printf("��ġġ���� �ּ���. \n");
		else if (gimbab == 3)
			printf("�Ұ��ġ���� �ּ���. \n");
}