#include "main.h"
/**
 * get_bit - function gets a bit at index
 * @index: the index of the bit to be returned
 * @n: the number whose bit at index is to be returned
 * Return: value at a index, or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int thebit;

	if (index > 63)
		return (-1);
	thebit = (n >> index) & 1;
	return (thebit);
}
