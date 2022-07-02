#include <stdio.h>
/**
 * main - Entery here
 * Description: without e and q
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar(10);
	return (0);
}
