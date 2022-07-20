#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints string followed by newline
 * @s: pointer character
 * Return: non
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
