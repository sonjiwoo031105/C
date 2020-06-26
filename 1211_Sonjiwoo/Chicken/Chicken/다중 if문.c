#include <stdio.h>

int main(void)
{
	int food;
	printf(" »ç°í ½ÍÀº À½½ÄÀ» °ñ¶ó¶ó. \n 1.¶±²¿Ä¡ 2.ÇÖµµ±× 3.¼Ò¶±¼Ò¶±");
	scanf_s("%d", &food);

	if (food == 1) {
		printf("¶±²¿Ä¡\n");
	}
	if (food == 2) {
		printf("ÇÖµµ±×\n");
	}
	if (food == 3) {
		printf("¼Ò¶±¼Ò¶±\n");
	}
}