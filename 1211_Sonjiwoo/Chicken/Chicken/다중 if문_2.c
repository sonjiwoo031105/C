#include <stdio.h>

void main(void)
{
	int food;
	printf(" �԰� ���� ������ ���� \n 1.������ 2.ġŲ 3.����");
		scanf_s("%d", &food);
		if (food == 1) {
			printf("������\n");
	}
		if (food == 2) {
			printf("ġŲ\n");
		}
		if (food == 3) {
			printf("����\n");
		}
}