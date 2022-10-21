#include "hash_tables.h"

/**
 * hash_table_set - function that adds new element to hash table
 * @ht: pointer to created size
 * @key: the key
 * @value: the value
 * Return: 1 if succeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *et = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	et = ht->array[index];
	if (et && strcmp(key, et->key) == 0)
	{
		free(et->value);
		et->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
