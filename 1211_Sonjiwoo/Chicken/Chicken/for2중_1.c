#include <stdio.h>
void main()
{
	int value;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			value = i * j;
			printf("%d * %d = %d \n", i, j, value);
		}
	}
}