/* ����ó��
   1. �����, �ڹ� ,��ǻ�ͱ��� �������� �Է¹޴´�.
   2. �Է¹��� ���� 90~100�̸� A, 80~89�� B, 70~79�̸� C 69���ϴ�
      D�� ���*/
#include <stdio.h>

void print_rank(int score)
{
	if (score >= 90 && score <= 100) {
		printf("A \n");
	}
	else if (score >= 80) {
		printf("B \n");
	}
	else if (score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}
}
void main(void)
{
	int c_score;
	printf("����� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &c_score);
	print_rank(c_score);
	
	int java_score;
	printf("�ڹ� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &java_score);
	print_rank(java_score);


	int com_score;
	printf("�ı� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &com_score);
	print_rank(com_score);

	}