#include "lists.h"
/**
 * insert_dnodeint_at_index - function inserts new node at a given position
 * @h: pointer to the head
 * @idx: index
 * @n: the new data to be added
 * Return: the address of the new node, NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newtemp;
	unsigned int count = 0;

	newtemp = malloc(sizeof(dlistint_t));
	if (newtemp == NULL)
		return (NULL);
	temp = *h;
	while (temp)
	{
		if (idx == count)
			break;
		temp = temp->next;
		count++;
	}
	temp = newtemp;
	temp->n = n;
	newtemp->prev = NULL;
	temp->next = newtemp;
	newtemp->prev = temp;
	newtemp->next = temp->next;
	return (newtemp);
}
