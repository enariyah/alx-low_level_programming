#include <stdio.h>
/**
 * main - entery here
 *
 * Return: zero
 */
int main(void)
{
	int h;

	for (h = 'z'; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar(10);
	return (0);
}
