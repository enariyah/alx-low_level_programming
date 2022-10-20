#include "hash_tables.h"

/**
 * hash_table_create - function creates new hash table
 * @size: the size of the newly created hash table
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;
	hash_node_t **ar;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ar = malloc(sizeof(hash_node_t) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		ar[i] = NULL;
	ht->size = size;
	ht->array = ar;
	return (ht);
}
