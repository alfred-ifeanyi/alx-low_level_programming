/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
	int i, j;
	char leet_map[5][3] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_map[j][0] || str[i] == leet_map[j][0] - 32)
			{
				str[i] = leet_map[j][1];
			}
		}
	}

	return (str);
}
