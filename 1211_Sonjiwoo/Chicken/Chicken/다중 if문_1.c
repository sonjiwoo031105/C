#include <stdio.h>

void main(void)
{
	int score;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);

	if (score >= 400) {
		printf("A�Դϴ�.");
	}
	if (score >= 300) {
		printf("B�Դϴ�.");
	}
	if (score >= 200) {
		printf("C�Դϴ�.");
	}
	if (score >= 0) {
		printf("���հ��Դϴ�.");
	}
	
}