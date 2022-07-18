#include "main.h"
/**
 * _memset - function fills the first n bytes by s
 * @s: pointer variable to be filled
 * @b: the char var to fill
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ss = s, con = b;

	for (i = 0; i < n; i++)
	{
		ss[i] = con;
	}
	return (ss);
}
