#include <stdio.h>

void main(void)
{
	int a = 1;
	char b = 2;
	float c = 3.3;
	double d = 4.8;
	printf("1은 %d바이트 \n", sizeof(1));
	printf("3.3은 %d바이트 \n", sizeof(3.3));
	printf("int+char는 %d바이트 \n", sizeof(a + b));
	printf("int+double은 %d바이트 \n", sizeof(a + d));
	printf("int+float은 %d바이트 \n", sizeof(a + c));
	// 명시적 형변환
	printf("%f %d \n", c + d, (int)c + (int)d);
}