#include <stdio.h>

void main()
{
	int score;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100) {
		printf("A \n");
	}else if(score >= 80){
		printf("B \n");
	}
	else if (score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}
}