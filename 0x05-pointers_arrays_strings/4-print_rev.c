#include "stdio.h"
#include "string.h"

/**
 * print_rev - prints the reversed string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
