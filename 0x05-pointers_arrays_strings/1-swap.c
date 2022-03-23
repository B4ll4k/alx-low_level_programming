/**
 * swap_int - swaps values of the given two parameters
 * @a: the first value
 * @b: the second value
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
