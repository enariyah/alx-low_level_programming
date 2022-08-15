#include "lists.h"
/**
 * print_listint - function that prints all elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = NULL;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
