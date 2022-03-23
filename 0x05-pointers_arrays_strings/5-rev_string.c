#include "stdio.h"
#include "string.h"

/**
 * rev_string - reverse the string
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
        int i;
	int j = 0;
	char str[strlen(s)];

        for (i = strlen(s) - 1; i >= 0; i--)
        {
        	str[j] = s[i];
			j++;
	}
        s = str;
}
