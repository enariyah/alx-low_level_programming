#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array name
 * @size: array size
 * @cmp: a function compare values
 * Return: index of the first element, -1 if no matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
