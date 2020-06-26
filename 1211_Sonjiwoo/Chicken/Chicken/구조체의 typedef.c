#include <stdio.h>

typedef struct point {
	int x;
	int y;
}_Point;

void main(void)
{
	_Point p1 = { 10, 20 };

	printf("(%d, %d) \n", p1.x, p1.y);
}