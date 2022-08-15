#include "lists.h"
/**
 * pop_listint - function deletes the head node
 * @head: pointer to the head
 * Return: the deleted node data, if the list is empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	return (data);
}

