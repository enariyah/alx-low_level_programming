#include "main.h"
/**
 * clear_bit - function sets bit to 0 at index
 * @n: the value to be changed
 * @index: index of the bit
 * Return: 1 if it worked, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
