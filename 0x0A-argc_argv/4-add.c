#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > '9' && atoi(argv[i]) < '0')
			{
				printf("Error\n");
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
