#include "stdio.h"
#include "string.h"

/**
 * puts_half - prints half of the given string
 * @str: the input string
 */
void puts_half(char *str)
{
	int n;
	int i;
	int l = strlen(str);

	if (strlen(str) % 2 == 0)
		n = strlen(str) / 2;
	else
		n = (strlen(str) - 1) / 2;

	for (i = n; i < l; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
