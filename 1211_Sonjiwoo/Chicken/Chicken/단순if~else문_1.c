#include <stdio.h>

void main(void)
{
	int average;
	printf("����� �Է��Ͻÿ�: ");
	scanf_s("%d", &average);

	if (average >= 80) {
		printf("�����մϴ�.\n");
	}
	else {
		printf("�й��ϼ���.\n");
	}
}