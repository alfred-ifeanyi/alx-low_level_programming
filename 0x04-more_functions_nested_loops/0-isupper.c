#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: the number to be  checked
 * Return: 1 for uppercase letter or 0 for otherwise
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
