#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

double Distance(Point p1, Point p2);

void main(void)
{
	Point p1 = { 0, 0 }, p2 = { 3, 4 };
	printf("%f \n", Distance(p1, p2));
}

double Distance(Point p1, Point p2)
{
	return sqrt( (double) (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}