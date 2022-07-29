#include "main.h"
/**
 * string_nconcat - function concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: size to be allocated
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, len;
	char *p;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	if (n > len2)
		len = len1 + len2;
	else
		len = len1 + n;
	p = malloc((sizeof(char) * len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
		p[j++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		p[j++] = s2[i];
	return (p);
}
