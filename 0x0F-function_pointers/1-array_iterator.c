#include "function_pointers.h"
/**
 * array_iterator - function executes given as a parameter
 * @array: name of the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i <= size; i++)
		{
			action(array[i]);
		}
	}
}
