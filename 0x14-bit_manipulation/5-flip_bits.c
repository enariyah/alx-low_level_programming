#include "main.h"
/**
 * flip_bits - function returns the numger bits you need to get from num to num
 * @n: first num
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
