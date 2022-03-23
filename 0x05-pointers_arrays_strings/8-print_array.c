#include "stdio.h"

/**
 * print_array - prints n elements of a given array
 * @a: the input array
 * @n: the number of elements to display
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
