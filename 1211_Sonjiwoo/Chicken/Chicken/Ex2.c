#include <stdio.h>

void main()
{
	int num;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	if (num > 10) {
		printf("���� %d(��)�� 10���� Ů�ϴ�.\n", num);
	}
	else if (num < 10) {
		printf("���� %d(��)�� 10���� �۽��ϴ�.\n", num);
	}
	else
		printf("���� %d(��)�� 10�Դϴ�.\n", num);
}