#include <stdio.h>

void main(void)
{
	char a1 = 'a', a2 = 'A', a3 = '��';
	int b1 = 'a', b2 = 'A', b3 = '��';
	char c1 = 97, c2 = 65;

	//char ������ 1����Ʈ�� ������ ���� ������
	//'��'�� 2����Ʈ�� ���̴�.
	printf("char�� ������� %c %c %c \n", a1, a2, a3);
	printf("char�� ����� %d %d %d \n", a1, a2, a3);

	printf("int�� ������� %c %c %c \n", b1, b2, b3);
	printf("int�� ����� %d %d %d \n", b1, b2, b3);

	printf("char�� ������� %c %c \n", c1, c2);
	printf("char�� ����� %d %d \n", c1, c2);
}