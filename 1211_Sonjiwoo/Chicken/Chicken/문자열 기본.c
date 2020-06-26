#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";
	printf("%s \n", str);
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("문자 %c(아스키 %d) \n", str[i], str[i]);
	}
}