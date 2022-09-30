#include "lists.h"
/**
 * get_dnodeint_at_index - function returns node at index
 * @head: pointer to the head
 * @index: index of the node to be returned
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp)
	{
		if (count == index)
			break;
		temp = temp->next;
		count++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
