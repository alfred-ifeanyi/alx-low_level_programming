#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @src: Pointer to the string
 * Return: Pointer to the modified string
 */
char *string_toupper(char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - ('a' - 'A');
		}
		i++;
	}

	return (src);
}
