#include "main.h"
/**
 * print_chessboard - function prints elements of chessboard
 * @a: the array variable
 * Return: non
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
