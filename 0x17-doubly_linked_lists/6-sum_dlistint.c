#include "lists.h"
/**
 * sum_dlistint - function returns the sum of all data in linked list
 * @head: pointer to the head
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (!temp)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
