#include "main.h"
/**
 * main - entery here
 * description: prints lowercase alphabet
 * Return: zero
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
