#include <stdio.h>

void main(void)
{
	int score;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);

	if (score >= 400) {
		printf("A�Դϴ�.");
	}
	else if (score >= 300) {
		printf("B�Դϴ�.");
	}
	else if (score >= 200) {
		printf("C�Դϴ�.");
	}
	else {
		printf("���հ��Դϴ�.");
	}
}