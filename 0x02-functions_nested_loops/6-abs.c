#include "main.h"
/**
 * _abs - a function which is gonna give us absolute value of a number
 * @a: the parameter
 * Return: always zero
 */
int _abs(int a)
{
	int abs;

	if (a < 0)
	{
		abs = a * -1;
		return (abs);
	}
	else
	{
		return (a);
	}
}
