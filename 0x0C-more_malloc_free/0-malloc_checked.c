#include "main.h"
/**
 * malloc_checked - function allocates memory dynamically
 * @b: integer variable
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
