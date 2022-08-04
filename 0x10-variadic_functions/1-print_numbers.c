#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers, followed by new line
 * @separator: string to be printed between numbers
 * @n: number of arguments to be passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, a = 0;

	va_start(args, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			a = va_arg(args, int);
				printf("%d", a);
				if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(args);
}
