#include "main.h"
/**
 * _isalpha - checks whether alphabet or not.
 * @c - declared integer
 * Return: 1 if is letter otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
