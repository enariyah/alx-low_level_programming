#include "main.h"
/**
 * print_alphabet_x10 -> Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 1;

	while (b <= 10)
	{
	b++;
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
	}
}
