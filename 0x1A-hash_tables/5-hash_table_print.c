#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash value
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		for (ptr = ht->array[i]; ptr != NULL; ptr = ptr->next)
		{
			if (first)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				first = 0;
			}

			else
				printf(", '%s': '%s'", ptr->key, ptr->value);
		}

	}
	printf("}\n");
}
