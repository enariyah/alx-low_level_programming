#include "lists.h"
/**
 * add_nodeint_end - adds new node at end
 * @head: pointer to the head
 * @n: new node to be added
 * Return: address of the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
	temp->next = new;
	return (temp);
	}
}
