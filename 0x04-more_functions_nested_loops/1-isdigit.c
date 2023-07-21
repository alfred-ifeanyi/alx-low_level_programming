#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: the number to be checked
 * Return: 1 for a character that will be a digit or 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
