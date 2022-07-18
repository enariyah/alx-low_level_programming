#include "main.h"
/**
 * print_chessboard - function prints elements of chessboard
 * @a: the array variable
 * Return: non
 */
void print_chessboard(char (*a)[8])
{
	int i,j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		
			_putchar(a[i][j]);
		
		_putchar(10);
	}
}
