#include "main.h"
/**
 * print_rev - prints the string in reverse order
 * @s: a variable string
 * Return: nothing
 */
void print_rev(char *s)
{
	int l, a, b;

	for (a = 0; s[a] != '\0'; a++)
		l = a;
	for (b = l; b >= -1; b--)
	{
		_putchar(s[b]);
	}

	_putchar(10);
}
