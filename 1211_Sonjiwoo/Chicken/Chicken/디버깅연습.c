// ���ϸ� ����ġup ü�� down, ���� ü���� up
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
		printf("����ü�� %d, ����ġ %d \n", life, exp);
		printf("���ڸ� �Է��ϼ��� \n");
		printf("1. ���Ѵ� \n");
		printf("2. ���� \n\n");
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
	printf("�׾����ϴ�. ����");
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