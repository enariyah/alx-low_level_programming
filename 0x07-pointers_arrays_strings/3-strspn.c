#include "main.h"
/**
 * _strspn - a function gets the length of prefix substring
 * @s: initial segment
 * @accept: byte container
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;
	char *con = s, *h = accept;

	for (i = 0; con[i] >= '\0'; i++)
	{
		if (con[i] == h[i])
		j++;
	}
	return (j);
}
