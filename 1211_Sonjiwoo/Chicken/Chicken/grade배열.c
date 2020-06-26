#include <stdio.h>
// 등급을 출력해주는 함수. score : 넘겨 받는 점수
char Cal_Rank(int score);

//점수의 평균을 계산
void Cal_Avg(int score);

void main(void)
{
	double avg;
	int score[5];

	for (char rank, i = 0; i < 5; i++)
	{
		printf("출석번호 %d번의 점수를 입력하시오: ", i + 1);
		scanf("%d", &score[i]);
		rank = Cal_Rank(score[i]);
		printf("%d번의 등급은 %c입니다. \n", i + 1, rank);
	}
	Cal_Avg(score);
}


