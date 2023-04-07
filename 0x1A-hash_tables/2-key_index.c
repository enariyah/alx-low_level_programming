#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - returns key index using djb2 hash value
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
