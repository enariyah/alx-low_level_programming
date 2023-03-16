#include "lists.h"
/**
 * add_dnodeint - function adds new node at begining
 * @head: pointer to the head
 * @n: the new data to be added
 * Return: the new node created
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
