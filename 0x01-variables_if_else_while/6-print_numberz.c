#include <stdio.h>
/**
 * main - entery
 * Return: zero
 */
int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar((h % 10) + '0');
	}
	putchar('\n');
	return (0);
}
