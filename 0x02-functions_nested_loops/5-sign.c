#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: This number to be checked
 * Return: 1 for + number, -1 for - munber or zero is n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
