//크기가 3인 int 공간의 배열을 동적으로 할당하시오
//동적 할당된 배열에 10,20,30의 값을 넣으시오
//동적 할당된 배열의 값을 출력하시오
//할당된 배열의 공간을 해제하시오

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int* ptr = (int*)malloc(sizeof(int)*3);
	*ptr = 10;
	*(ptr + 1) = 20;
	*(ptr + 2) = 30;
	printf("%d %d %d \n", *ptr, *(ptr + 1),*(ptr + 2));
	free(ptr);
}





