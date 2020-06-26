#include <stdio.h>

int main(void)
{
	int score;
	printf("성적을 입력해라 :\n");
	scanf_s("%d", &score);

	if (score >= 200) {
		printf("합격입니다!!\n");
	}
	else {
		printf("불합격입니다.\n");
	}

}