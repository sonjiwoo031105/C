#include <stdio.h>
 
int sum(int num1, int num2)
{
	return num1 + num2;
}

int main() 
{
	int a, b;

	printf("��ȯ���� �ְ�, �Ű������� �ִ� ���");
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &a, &b);

	int result = 0;
	result = sum(a, b);

	printf("��� ��� : %d \n", result);

	printf("��ȯ���� ����, �Ű������� �ִ� ���");
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &a, &b);

	sum(a, b);

	printf("��ȯ���� �ְ�, �Ű������� ���� ���");
	printf("�� ���� �Է�: ");
	printf("��� ���: %d \n", sum(a, b));

	printf("��ȯ���� ����, �Ű������� ���� ���");
	sum(a, b);

	return 0;
}


