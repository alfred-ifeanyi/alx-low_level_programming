#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUM 2772

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, sum = 0, n;
	char password[100];

	srand(time(NULL));

	while (sum < SUM)
	{
		n = rand() % 128;
		if (n >= 32)
		{
			password[i++] = n;
			sum += n;
		}
	}

	password[i] = '\0';

	if (sum != SUM)
	{
		password[i - 1] += (SUM - sum);
	}

	printf("%s", password);

	return (0);
}
