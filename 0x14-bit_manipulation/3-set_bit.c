#include "main.h"
/**
 * set_bit - function sets a bit at a given index
 * @n: the number to be changed
 * @index: the index of the bit
 * Return: 1 if succeed, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
