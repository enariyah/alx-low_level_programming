/**
 * _strcpy - function that copy source to destination
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
	} while (*(src + i++));
	return (dest);
}
