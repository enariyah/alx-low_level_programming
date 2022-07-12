#include "main.h"
/**
 * _puts - a function prints a string to stdout
 * @str: a variable to be printed
 * Return: zero
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar(10);
}
