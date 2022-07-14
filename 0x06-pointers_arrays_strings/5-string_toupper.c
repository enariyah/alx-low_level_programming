#include "main.h"
/**
 * string_toupper - converts string to upper case
 * @str: pointer variable
 * Return: non
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str);
}
