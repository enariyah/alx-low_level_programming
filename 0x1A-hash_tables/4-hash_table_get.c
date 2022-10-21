#include "hash_tables.h"

/**
 * hash_table_get - function that retrives a value associated with a key
 * @ht: pointer to the hash table
 * @key: the key
 * Return: the value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char*) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
