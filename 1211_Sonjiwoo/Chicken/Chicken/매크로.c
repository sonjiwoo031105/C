#include<stdio.h>
//자주 쓰이는데 바뀌지 않은것 - 가독성
#define NORMAL 0
#define SOGOGI 1
#define CHEEZE 2
#define CHAMCHI 4

void main(void)
{
	int gimbab = NORMAL;

	if (gimbab == NORMAL)
		printf("보통김밥 주세요. \n");
	else if (gimbab == SOGOGI)
		printf("소고기김밥 주세요. \n");
	else if (gimbab == CHEEZE)
		printf("치즈김밥 주세요. \n");
	else if (gimbab == CHAMCHI)
		printf("참치김밥 주세요. \n");
}