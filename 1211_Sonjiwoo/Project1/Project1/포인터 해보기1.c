#include <stdio.h>

void main(void)
{
	char str[5][10] = {
		"김동률",
		"김남길",
		"아이유",
		"페이커",
		"김장훈"
	};
	for (int i = 0; i < 5; i++)
		printf("%s \n", str[i]);
}
	