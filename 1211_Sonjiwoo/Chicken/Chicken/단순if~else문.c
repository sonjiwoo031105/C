#include <stdio.h>

int main(void)
{
	int score;
	printf("������ �Է��ض� :\n");
	scanf_s("%d", &score);

	if (score >= 200) {
		printf("�հ��Դϴ�!!\n");
	}
	else {
		printf("���հ��Դϴ�.\n");
	}

}