#include "main.h"
/**
 * swap_int - swaps the values two integers
 * @a: an integer to be swaped
 * @b: another integer to be swaped
 * Return: zero
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
