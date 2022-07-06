#include "main.h"
/**
 * print_last_digit - a function thats gonna print the last digit
 * @a: an integer to be declared
 * Return: always zero
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
	b = b * -1;
	_putchar(b + '0');
	return (b);
	}
	else
	{
		_putchar(b + '0');
	return (b);
	}
}
