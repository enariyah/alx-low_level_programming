#include "main.h"
/**
 * leet - function encodes a string to 1337
 * @s: pointer variable
 * Return: s
 */
char *leet(char *s)
{
	int a, b = 0;
	char c[5] = {'a', 'e', 'o', 't', 'l'};
	char d[5] = {'4', '3', '0', '7', '1'};

	for (a = 0; s[a] != '\0'; a++)
	{
		b = 0;

		while (b < 5)
		{
			if (s[a] == c[b] || s[a] + 32 == c[b])
			{
				s[a] = d[b];
			}
			b++;
		}
	}
	return (s);
}
