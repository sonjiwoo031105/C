#include <stdio.h>

struct Student {
	char name[20];
	int c;
	int java;
};

int main(void)
{
	struct Student stu;

	int c, java;
	printf("�̸�, ����� ����, �ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%s %d %d", stu.name, &stu.c, &stu.java);

	printf("�̸� : %s, ����� ���� : %d, �ڹ� ���� %d \n", stu.name, stu.c, stu.java);
}
