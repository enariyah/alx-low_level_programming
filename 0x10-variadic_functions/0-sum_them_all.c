#include "variadic_functions.h"
/**
 * sum_them_all - functions returns sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
