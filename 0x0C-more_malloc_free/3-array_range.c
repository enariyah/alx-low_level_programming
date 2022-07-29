#include "main.h"
/**
 * array_range - function creates an array of integers
 * @min: the minimum number
 * @max: the maximum number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * max + 1);
	if (p == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
		p[i] = j++;
	return (p);
}
