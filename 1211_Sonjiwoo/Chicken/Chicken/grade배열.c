#include <stdio.h>
// ����� ������ִ� �Լ�. score : �Ѱ� �޴� ����
char Cal_Rank(int score);

//������ ����� ���
void Cal_Avg(int score);

void main(void)
{
	double avg;
	int score[5];

	for (char rank, i = 0; i < 5; i++)
	{
		printf("�⼮��ȣ %d���� ������ �Է��Ͻÿ�: ", i + 1);
		scanf("%d", &score[i]);
		rank = Cal_Rank(score[i]);
		printf("%d���� ����� %c�Դϴ�. \n", i + 1, rank);
	}
	Cal_Avg(score);
}


