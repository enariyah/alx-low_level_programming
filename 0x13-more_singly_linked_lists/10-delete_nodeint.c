#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes node at a given index of the list
 * @head: pointer to the head
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;

	prev = *head;
	curr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while (index != 0)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return (1);
}
