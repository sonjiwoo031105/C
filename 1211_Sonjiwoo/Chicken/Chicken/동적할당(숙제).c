//ũ�Ⱑ 3�� int ������ �迭�� �������� �Ҵ��Ͻÿ�
//���� �Ҵ�� �迭�� 10,20,30�� ���� �����ÿ�
//���� �Ҵ�� �迭�� ���� ����Ͻÿ�
//�Ҵ�� �迭�� ������ �����Ͻÿ�

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int* ptr = (int*)malloc(sizeof(int)*3);
	*ptr = 10;
	*(ptr + 1) = 20;
	*(ptr + 2) = 30;
	printf("%d %d %d \n", *ptr, *(ptr + 1),*(ptr + 2));
	free(ptr);
}





