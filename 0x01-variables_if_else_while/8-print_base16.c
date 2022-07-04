#include <stdio.h>
#include <stdlib.h>
/**
 * main - entery here
 * description: prints all the numbers of base 16 in lowercase
 * Return: always zero
 */
int main()
{
	int num = 0;
	char lett = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');
	return (0);
}
