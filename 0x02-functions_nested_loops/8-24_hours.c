#include "main.h"
/**
 * jack_bauer - is a function for 24 hours
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			if (a == 23 && b == 99)
				continue;
			_putchar('\n');
		}
	}
}
