#include <stdio.h>

void main(void)
{
	int a = 3, b = 4;
	if (5 > 3 && b > a)
	{
		printf("ù ��° if�� �� \n");
	}

	if (4 > 3 || b > a)
		printf("�� ��° if�� �� \n");

	if (!(a > b))
	{
		printf("�� ��° if�� �� \n");
	}

}