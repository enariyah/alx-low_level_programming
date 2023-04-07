#include "hash_tables.h"
/**
 * hash_table_set - adds a new element to the hash table.
 * @ht: hash table for to add or update
 * @key: key
 * @value: value of the key
 * Return: 1 in success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node, *ptr;
	char *new_value;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			break;
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
			return (0);
		new_node->value = strdup(value);
		if (new_node->value == NULL)
			return (0);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}
	else
	{
		new_value = strdup(value);
		if (new_value == NULL)
			return (0);
		free(ptr->value);
		ptr->value = new_value;
	}
	return (1);
}
