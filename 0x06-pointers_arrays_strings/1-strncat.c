#include "main.h"
/**
 * *_strncat - a function concatenates two strings
 * @dest: destination variable
 * @src: source variable
 * @n: integer variable
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
