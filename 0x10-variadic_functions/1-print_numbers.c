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
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			a = va_arg(args, int);
			if (i == (n - 1))
				printf("%d", a);
			else
				printf("%d%s", a, separator);
		}
		printf("\n");
	}
	else
		return;
	va_end(args);
}
