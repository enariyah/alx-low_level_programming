#include "lists.h"
/**
 * add_dnodeint_end - function that adds new node at the end
 * @head: pointer to the head
 * @n: the node to be added
 * Return: the adress of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}
