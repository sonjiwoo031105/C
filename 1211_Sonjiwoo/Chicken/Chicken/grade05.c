#include<stdio.h>

void print_rank(int score);
double avg_score(int score1, int score2, int score3, int score4, int score5);
void main(void)
{
	int score1, score2, score3, score4, score5;
	double avg;

	printf("1���л��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score1);
	print_rank(score1);

	printf("2���л��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score2);
	print_rank(score2);

	printf("3���л��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score3);
	print_rank(score3);

	printf("4���л��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score4);
	print_rank(score4);

	printf("5���л��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score5);
	print_rank(score5);

	avg = avg_score(score1, score2, score3, score4, score5);
	printf("����� %d", avg_score);
		
}

void print_rank(int socre)
{
	if (score >= 90 && score <= 100) 
		printf("A�Դϴ�. \n");
	else if (score >= 80) 
		printf("B�Դϴ�. \n");
	else if (score >= 70) 
		printf("C�Դϴ�. \n");
	else if (socre >= 60) 
		printf("D�Դϴ�. \n");
	else if 
		printf("E�Դϴ�. \n");
}

double avg_score(int score1, int score2, int score3, int score4, int score5)
{
	return (double)(score1 + score2 + score3 + score4 + score5) / 5;
}