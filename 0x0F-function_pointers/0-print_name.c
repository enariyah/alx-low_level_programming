#include "function_pointers.h"
/**
 * print_name - function prints name
 * @name: name of a person
 * @f: fun pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
