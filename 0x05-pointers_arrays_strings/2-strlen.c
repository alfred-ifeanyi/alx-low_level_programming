/**
 * _strlen -  Returns the length of a string.
 * @s: The string to get the length of
 * Return: The length of strings
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
