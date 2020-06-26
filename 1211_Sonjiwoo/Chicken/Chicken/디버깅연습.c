// 일하면 경험치up 체력 down, 쉬면 체력이 up
#include <stdio.h>
#include <stdlib.h>

void work();
void rest();

int life = 30, exp = 0;
void main(void)
{
	int select;
	while (life > 0)
	{
		printf("현재체력 %d, 경험치 %d \n", life, exp);
		printf("숫자를 입력하세요 \n");
		printf("1. 일한다 \n");
		printf("2. 쉰다 \n\n");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			work();
			break;

		case 2:
			rest();
			break;
		}
		system("cls");
	}
	printf("죽었습니다. 으악");
}

void work()
{
	life -= 10;
	exp += 1;
}

void rest()
{
	life += 8;
}