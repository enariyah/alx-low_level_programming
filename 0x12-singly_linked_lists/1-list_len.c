#include "lists.h"
/**
 * list_len - function returns number of elements in the list
 * @h: pointer of the head file
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
