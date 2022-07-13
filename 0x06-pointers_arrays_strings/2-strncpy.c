#include "main.h"
/**
 * *_strncpy - a function copies string
 * @dest: destination variable
 * @src: source variable
 * @n: integer variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
