#include <stdio.h>

int main(void)
{
	char name[20];
	int c;
	int java;

	printf("이름, 씨언어 점수, 자바 점수를 입력하시오 : ");
	scanf("%s %d %d", name, &c, &java);

	printf("이름 : %s, 씨언어 점수 : %d, 자바 점수 %d \n", name, c, java);
}