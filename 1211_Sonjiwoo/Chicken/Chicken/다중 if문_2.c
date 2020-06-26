#include <stdio.h>

void main(void)
{
	int food;
	printf(" 먹고 싶은 음식을 골라라 \n 1.떡볶이 2.치킨 3.피자");
		scanf_s("%d", &food);
		if (food == 1) {
			printf("떡볶이\n");
	}
		if (food == 2) {
			printf("치킨\n");
		}
		if (food == 3) {
			printf("피자\n");
		}
}