#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node = NULL, *thenext = NULL;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			thenext = node;
			node = node->next;
			free(thenext->value);
			free(thenext);
		}
	}
	free(ht->array);
	free(ht);
}
