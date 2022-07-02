#include <stdio.h>
/**
 * main - Entery is here
 * Description: small and capital alphabets
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 127; a++)
	{
		putchar(a);
	}
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
