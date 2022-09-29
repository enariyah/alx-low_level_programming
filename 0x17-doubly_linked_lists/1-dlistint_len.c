#include "lists.h"
/**
 * dlistint_len - fuction returns number of elements in a list
 * @h: pointer to head file
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
