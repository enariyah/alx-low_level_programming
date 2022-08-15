#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of listint_t list
 * @head: pointer to the head
 * @index: index of the node to be returned
 * Return: node at index, if not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	if (temp != NULL)
		return (temp);
	else
		return (NULL);
}
