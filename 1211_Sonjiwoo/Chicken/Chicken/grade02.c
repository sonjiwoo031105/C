#include <stdio.h>

void main(void)
{
	int c_score;
	printf("����� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &c_score);

	if (c_score >= 90 && c_score <= 100) {
		printf("A \n");
	}
	else if (c_score >= 80) {
		printf("B \n");
	}
	else if (c_score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}

	int java_score;
	printf("�ڹ� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &java_score);

	if (java_score >= 90 && java_score <= 100) {
		printf("A \n");
	}
	else if (java_score >= 80) {
		printf("B \n");
	}
	else if (java_score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}

	int com_score;
	printf("�ı� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &com_score);

	if (com_score >= 90 && com_score <= 100) {
		printf("A \n");
	}
	else if (com_score >= 80) {
		printf("B \n");
	}
	else if (com_score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}

	
}