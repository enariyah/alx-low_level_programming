#include "main.h"
/**
 * get_endianness - function that checks endianness
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &num;

	return (*c);
}
