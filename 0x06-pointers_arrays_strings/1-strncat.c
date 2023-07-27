#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: bytes from src
 * @src: source string
 * @dest: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; a < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
