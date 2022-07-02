#include <stdio.h>
/**
 * main - Entery is here
 * Description: small and capital alphabets
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar(10);
	return (0);
}
