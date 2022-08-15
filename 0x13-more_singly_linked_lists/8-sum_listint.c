#include "lists.h"
/**
 * sum_listint - function returns the sum of all the data in the list
 * @head: pointer to head
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp->next == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
