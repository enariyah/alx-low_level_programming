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
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
			putchar(44);
			putchar(32);
			}
			}
		}
	}
	putchar(10);
	return (0);
}
