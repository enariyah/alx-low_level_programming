#include "main.h"
/**
 * read_textfile - function reads text file and prints it to the POSIX stdout
 * @filename: pointer to the name of the file to be printed
 * @letters: number of the letters
 * Return: number of letters, 0 in any failer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r = read(fd, buffer, letters);
	if (r < 0)
		return (0);
	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
		return (0);
	free(buffer);
	return (r);
}
