#include "lists.h"
/**
 * listint_len - function returns the number of elements in a linked list
 * @h: pointer to the header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
