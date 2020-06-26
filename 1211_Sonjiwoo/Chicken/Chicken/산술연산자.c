#include <stdio.h>
 
void main(void)
{
	int a = 9, b = 4;
	printf("a + b는 %d \n", a + b);
	printf("a - b는 %d \n", a - b);
	printf("9 * 4는 %d \n", 9 * 4);
	printf("a / b는 %d \n", a / b);
	//%를 문자열로 나타낼 때는 %%로 입력
	printf("a %% b는 %d \n", a % b);
}