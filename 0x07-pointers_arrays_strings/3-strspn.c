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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		j++;
	}
	return (j);
}
