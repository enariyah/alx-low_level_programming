#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, j = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (j > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			j++;
		}
	}
	printf("}\n");
}
