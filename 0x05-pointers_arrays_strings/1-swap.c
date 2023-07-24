/**
 * swap_int - swaps the values of two integers
 * using two parameters
 *
 * @a: The first number to be swapped
 * @b: The second number to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
