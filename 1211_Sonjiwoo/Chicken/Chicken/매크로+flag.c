#include <stdio.h>

#define NORMAL 0
#define SOGOGI 1
#define CHEEZE 2
#define CHAMCHI 4

void PrintGimbab(int gimbab);

void main(void)
{
	int gimbab = CHAMCHI | CHEEZE;
	PrintGimbab(gimbab);

	gimbab = SOGOGI | CHEEZE;
	PrintGimbab(gimbab);
}

	void PrintGimbab(int gimbab) {
		if (gimbab == NORMAL)
			printf("보통김밥 주세요. \n");
		else if (gimbab == SOGOGI)
			printf("소고기김밥 주세요. \n");
		else if (gimbab == CHEEZE)
			printf("치즈김밥 주세요. \n");
		else if (gimbab == CHAMCHI)
			printf("참치김밥 주세요. \n");
		else if (gimbab == 6)
			printf("참치치즈김밥 주세요. \n");
		else if (gimbab == 3)
			printf("소고기치즈김밥 주세요. \n");
}