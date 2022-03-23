#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
 * rev_string - reverse the string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char *strr = (char *) malloc (strlen(s) * sizeof(char));

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		strr[j] = s[i];
		j++;
	}
	s = strr;
}
