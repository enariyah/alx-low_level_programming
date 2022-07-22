#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res = 1;

	if (argc == 3)
	{
		res = atoi(argv[1]);
		res *= atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
