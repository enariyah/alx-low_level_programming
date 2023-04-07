#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}
