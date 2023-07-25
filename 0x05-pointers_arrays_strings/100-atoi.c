#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int sign = 1, i = 0, num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	return (num * sign);
}
