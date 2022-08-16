#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts new node at given index
 * @head: pointer to the head
 * @idx: position of the new node
 * @n: the new node
 * Return: the address of the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = temp;
		temp = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
