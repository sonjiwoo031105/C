#include <stdio.h>
void main(void)
{
	int num = 5;
	int shift;
	printf("����Ʈ�� �� �Է�: ");
	scanf_s("%d", &shift);
	printf("5�� �������� %d��ŭ �������� shift�ϸ� %d�Դϴ�.\n", shift, 5 << shift);
}