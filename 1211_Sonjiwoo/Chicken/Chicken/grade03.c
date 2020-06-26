/* 성적처리
   1. 씨언어, 자바 ,컴퓨터구조 점수값을 입력받는다.
   2. 입력받은 값이 90~100이면 A, 80~89면 B, 70~79이면 C 69이하는
      D로 출력*/
#include <stdio.h>

void print_rank(int score)
{
	if (score >= 90 && score <= 100) {
		printf("A \n");
	}
	else if (score >= 80) {
		printf("B \n");
	}
	else if (score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}
}
void main(void)
{
	int c_score;
	printf("씨언어 점수를 입력하시오: ");
	scanf_s("%d", &c_score);
	print_rank(c_score);
	
	int java_score;
	printf("자바 점수를 입력하시오: ");
	scanf_s("%d", &java_score);
	print_rank(java_score);


	int com_score;
	printf("컴구 점수를 입력하시오: ");
	scanf_s("%d", &com_score);
	print_rank(com_score);

	}