#include <stdio.h>

void main()
{
	int num ;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	
	if (num > 10 && num < 20) {
		printf("���� %d(��)�� 10���� ũ�� 20���� �۽��ϴ�.\n", num);
	}
	else 
	{
		printf("���� %d(��)�� ���ǿ� �������� �ʽ��ϴ�.\n", num);
	}
}