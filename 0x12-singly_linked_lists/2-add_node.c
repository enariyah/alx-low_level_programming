#include "lists.h"
#include <string.h>
/**
 * add_node - function adds new node at the beginning of the list
 * @head: pointer to the head
 * @str: the new node to added
 * Return: the address of the new element or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new = NULL;
	char *nn = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	nn = strdup(str);
	if (nn == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		count++;
	new->str = nn;
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
