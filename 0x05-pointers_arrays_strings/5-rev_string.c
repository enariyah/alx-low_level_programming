#include "main.h"
/**
 * rev_string - a function prints reverse string
 * @s: a variable of the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0, len = 0, d;
	char c;

	while (s[a++])
		len++;
	d = len - 1;
	for (a = d; a >= len / 2; a--)
	{
		c = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = c;
	}
}
