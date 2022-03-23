#include "stdio.h"
#include "string.h"

/**
 * puts2 - outputs every other character in a given string
 * @str: the string given
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (0 % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
