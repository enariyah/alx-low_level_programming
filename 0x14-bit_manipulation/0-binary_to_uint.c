#include "main.h"
/**
 * binary_to_uint - function converts binary to unsigned int
 * @b: pointer to the binary number
 * Return: converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
