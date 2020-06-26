#include <stdio.h>
void main()
{
	int fruit;
	fruit = 2;

	switch (fruit){
	case 1:
		printf("딸기맛 우유 \n"); break;
	case 2:
		printf("바나나맛 우유 \n"); break;
	case 3:
		printf("포도맛 우유 \n"); break;
	default:
		printf("그 외의 경우 \n"); 
	}
 }