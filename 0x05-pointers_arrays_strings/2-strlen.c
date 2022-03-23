/**
 * _strlen - returns the length of the string from the parameter
 * @s: string input
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
