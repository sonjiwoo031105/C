#include <stdio.h>

void main(void)
{
	int score;
	printf("점수를 입력하시오:");
	scanf_s("%d", &score);

	if (score >= 400) {
		printf("A입니다.");
	}
	if (score >= 300) {
		printf("B입니다.");
	}
	if (score >= 200) {
		printf("C입니다.");
	}
	if (score >= 0) {
		printf("불합격입니다.");
	}
	
}