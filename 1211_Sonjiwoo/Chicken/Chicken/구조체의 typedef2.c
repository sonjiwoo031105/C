#include <stdio.h>
typedef struct point Point;

struct point {
	int x;
	int y;
};
void main(void)
{
	Point p2;
	p2.x = 20;
	p2.y = 40;
	printf("(%d, %d) \n", p2.x, p2.y);
}