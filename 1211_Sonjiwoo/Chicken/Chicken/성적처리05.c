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
	printf("이름, 씨언어 점수, 자바 점수를 입력하시오 : ");
	scanf("%s %d %d", stu.name, &stu.c, &stu.java);

	printf("이름 : %s, 씨언어 점수 : %d, 자바 점수 %d \n", stu.name, stu.c, stu.java);
}
