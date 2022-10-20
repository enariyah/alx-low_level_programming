#include "hash_tables.h"

/**
 * key_index - function that gives the index of the key
 * @key: the key
 * @size: the size of the hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);
	index = hash_djb2(key);
	return (index % size);
}
