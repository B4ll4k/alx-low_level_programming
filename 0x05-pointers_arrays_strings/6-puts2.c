#include "stdio.h"
#include "string.h"

/**
 * puts2 - outputs every other character in a given string
 * @str: the string given
 */
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (0 % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
