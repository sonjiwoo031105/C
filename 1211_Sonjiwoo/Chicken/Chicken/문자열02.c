#include <stdio.h>
void main()
{
	char str[20] = "Hello World";

	for (int i = 0; str[i] != NULL; i++)
		printf("%c", str[i]);
}