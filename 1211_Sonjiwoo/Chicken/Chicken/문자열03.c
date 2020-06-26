#include <stdio.h>
void main()
{
	char str[20] = "Hello World";
	str[7] = NULL;
	printf("%s \n", str);
}