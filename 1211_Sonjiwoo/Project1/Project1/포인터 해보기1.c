#include <stdio.h>

void main(void)
{
	char str[5][10] = {
		"�赿��",
		"�賲��",
		"������",
		"����Ŀ",
		"������"
	};
	for (int i = 0; i < 5; i++)
		printf("%s \n", str[i]);
}
	