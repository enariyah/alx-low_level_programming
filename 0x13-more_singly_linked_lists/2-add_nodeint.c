#include "lists.h"
/**
 * add_nodeint - function that adds node at the beginning of list
 * @head: pointer to the head
 * @n: the new node to be added
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
