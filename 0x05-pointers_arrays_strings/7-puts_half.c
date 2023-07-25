#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	for (j = 0 ; str[j] != '\0' ; j++)
		;
	if (j % 2 != 0)
	{
		for (i = (j + 1) / 2 ; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = j / 2 ; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
