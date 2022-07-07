#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c: is a character to be checked
 * Return: 1 if it is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
