#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";
	printf("%s \n", str);
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("���� %c(�ƽ�Ű %d) \n", str[i], str[i]);
	}
}