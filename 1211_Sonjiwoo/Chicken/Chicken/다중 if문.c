#include <stdio.h>

int main(void)
{
	int food;
	printf(" ��� ���� ������ ����. \n 1.����ġ 2.�ֵ��� 3.�Ҷ��Ҷ�");
	scanf_s("%d", &food);

	if (food == 1) {
		printf("����ġ\n");
	}
	if (food == 2) {
		printf("�ֵ���\n");
	}
	if (food == 3) {
		printf("�Ҷ��Ҷ�\n");
	}
}