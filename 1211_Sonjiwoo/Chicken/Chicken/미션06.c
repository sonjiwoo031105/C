#include <stdio.h>

void main(void)
{
	int a = 2;
	printf("전위 : %d \n", ++a); //a에 1을 더한 후에 출력

	printf("후위 : %d \n", a++); //이미 앞에서 a가 3이 된 상태에서 출력 먼저하고 그 후에 a에 1을 증가시킴.

}