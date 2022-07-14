#include "main.h"
/**
 * reverse_array - reverses contents of array
 * @a: int variable
 * @n: another variable
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *b, c, d, f;

	b = a;

	for (f = 1; f < n; f++)
	{
		b++;
	}

	for (d = 0; d < f / 2; d++)
	{
		c = a[d];
	a[d] = *b;
	*b = c;
	b--;
	}
}
