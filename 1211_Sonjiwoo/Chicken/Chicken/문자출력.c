#include <stdio.h>

void main(void)
{
	char a1 = 'a', a2 = 'A', a3 = '가';
	int b1 = 'a', b2 = 'A', b3 = '가';
	char c1 = 97, c2 = 65;

	//char 변수는 1바이트의 공간을 갖고 있으나
	//'가'는 2바이트의 값이다.
	printf("char형 문자출력 %c %c %c \n", a1, a2, a3);
	printf("char형 값출력 %d %d %d \n", a1, a2, a3);

	printf("int형 문자출력 %c %c %c \n", b1, b2, b3);
	printf("int형 값출력 %d %d %d \n", b1, b2, b3);

	printf("char형 문자출력 %c %c \n", c1, c2);
	printf("char형 값출력 %d %d \n", c1, c2);
}