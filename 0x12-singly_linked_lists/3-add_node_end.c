#include "lists.h"
#include <string.h>
/**
 * add_node_end - function adds new nod at the end of the list
 * @head: pointer to the head file
 * @str: the new node to be added
 * Return: address of the new element of NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;
	int i, count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		count++;
	new->str = strdup(str);
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = new;
		return (p);
	}
}
