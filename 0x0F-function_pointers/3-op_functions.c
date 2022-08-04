#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function returns sum
 * @a: first argument
 * @b: second argument
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function returns difference
 * @a: first argument
 * @b: second argument
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function returns product
 * @a: first argument
 * @b: second argument
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function returns quitient
 * @a: first agument
 * @b: second argument
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function returns remainder
 * @a: first argumet
 * @b: second argument
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
