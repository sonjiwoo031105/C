#include <stdio.h>

int global_val; //��������

void func1(int num)
{
	global_val = num;
}

void main(void)
{
	int local_val = 3; //main�Լ��� ��������
	global_val = 0;
	printf("�������� ���� %d �������� ���� %d \n", local_val, global_val);
	func1(8);
	printf("����� �������� ���� %d \n", global_val);
}