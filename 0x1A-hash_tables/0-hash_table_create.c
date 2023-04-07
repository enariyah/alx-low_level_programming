#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: number of hash table buckets to create
 * Return: address of new hash table, or NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	ht->size = size;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
