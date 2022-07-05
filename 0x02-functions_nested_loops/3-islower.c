#include "main.h"
/**
 * _islower - checks  if it is lowercase or not.
 * @c: the character to be checked.
 * Return: 1 if lowercase else returns 0.
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
