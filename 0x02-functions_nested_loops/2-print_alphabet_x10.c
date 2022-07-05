
#include "main.h"
/**
 * main - entery point
 *
 * Description: print lower case alphabets 10x
 *
 * Return: 0
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
