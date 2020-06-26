#include <stdio.h>
void main()
{
	char str[20] = "Hello World";
	char str2[20] = {'H','e','l','l','o',' ','W','o','r','l','d', NULL};

	printf("%s \n", str);
	printf("%s \n", str2);
}