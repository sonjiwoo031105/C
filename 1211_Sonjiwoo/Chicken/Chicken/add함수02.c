#include <stdio.h>

//������ ��ȯ
int sum(int num1, int num2)
{
	return num1 + num2;
	//���⼭ ����
	printf("HELLO WORLD \n");
	//���õ�
}

//��ȯ���� ���� (��ȯ���� �ǵ����̸� void ������ ��)
void sum2(int num1, int num2)//void�� ��ȯ���� ����
{
	int val = num1 + num2;
	//return; //���⼭ ����
	printf("%d \n", val);
}

void main(void)
{
	int a = 1;
	int c;
	c = sum(a, 2);
	printf("c�� ���� %d \n", c);

	sum2(2, 3);
}