#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	size_t count = 0;
	const list_t *temp = NULL;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
