#include "main.h"
/**
 * print_line - prints straight line
 * @n: number of times _ will be printed
 * Return: nothing
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		_putchar('_');
	}
	_putchar('\n');
}
