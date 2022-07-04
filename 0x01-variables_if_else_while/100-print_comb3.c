#include <stdio.h>
#include <stdlib.h>
/**
 * main - entery
 * description: 00-99
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		if (a != 10)
		{
			putchar((a/10)+'0');
			putchar((a%10)+'0');
			if (a == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
