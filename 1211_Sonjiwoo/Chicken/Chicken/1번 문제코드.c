#include <stdio.h>

void main(void)
{
	char str[4][6] = {
		"Alice",
		"Bob",
		"Carol",
		"David",
	};

	for (int i = 0; i < 4; i++)
		printf("%s \n", str[i]);
}