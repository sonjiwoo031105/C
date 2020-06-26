#include<stdio.h>

void print_rank(int score);
double avg_score(int score1, int score2, int score3, int score4, int score5);
void main(void)
{
	int score1, score2, score3, score4, score5;
	double avg;

	printf("1번학생의 점수를 입력하시오 : ");
	scanf_s("%d", &score1);
	print_rank(score1);

	printf("2번학생의 점수를 입력하시오 : ");
	scanf_s("%d", &score2);
	print_rank(score2);

	printf("3번학생의 점수를 입력하시오 : ");
	scanf_s("%d", &score3);
	print_rank(score3);

	printf("4번학생의 점수를 입력하시오 : ");
	scanf_s("%d", &score4);
	print_rank(score4);

	printf("5번학생의 점수를 입력하시오 : ");
	scanf_s("%d", &score5);
	print_rank(score5);

	avg = avg_score(score1, score2, score3, score4, score5);
	printf("평균은 %d", avg_score);
		
}

void print_rank(int socre)
{
	if (score >= 90 && score <= 100) 
		printf("A입니다. \n");
	else if (score >= 80) 
		printf("B입니다. \n");
	else if (score >= 70) 
		printf("C입니다. \n");
	else if (socre >= 60) 
		printf("D입니다. \n");
	else if 
		printf("E입니다. \n");
}

double avg_score(int score1, int score2, int score3, int score4, int score5)
{
	return (double)(score1 + score2 + score3 + score4 + score5) / 5;
}