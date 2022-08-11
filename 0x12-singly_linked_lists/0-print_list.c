#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = NULL;

	if (h == NULL)
		printf("[0] (nill)");
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
