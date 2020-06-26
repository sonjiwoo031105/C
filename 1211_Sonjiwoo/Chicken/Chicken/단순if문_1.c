#include <stdio.h>

void main(void)
{
	int height;
	printf("키를 입력하시오 :");
	scanf_s("%d", &height);

	if (height >= 150) {
		printf("놀이기구 탑승 가능합니다!!\n");
	}
}