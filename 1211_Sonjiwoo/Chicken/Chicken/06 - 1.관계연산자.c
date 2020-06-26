
#include <stdio.h>

void main(void)
{
	int a = (10 < 20);
	int b = (10 > 20);
	int c = (10 == 20);
	int d = (10 != 20);
	int e = (10 <= 20);
	printf("%d %d %d %d %d \n", a, b, c, d, e);

	if (10 < 20)
	{
		printf("10은 20보다 작습니다. \n");
	}
}

