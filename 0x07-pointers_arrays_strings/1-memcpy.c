#include "main.h"
/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest, *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
	return (destination);
}
