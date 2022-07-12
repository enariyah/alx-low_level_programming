#include "main.h"
/**
 * print_array - prints arranys
 * @a: a variable
 * @n: variable
 * Return: none
 */
void print_array(int *a, int n)
{
	int ba;

	for (ba = 0; ba < n; ba++)
	{
		if (ba == 0)
			printf("%d", a[ba]);
		else
			printf(", %d", a[ba]);
	}
	printf("\n");
}
