#include "main.h"
/**
 * main - function that copies content of a file to another file
 * @ac: count of arguments passed
 * @av: vector of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL);
	exit(98);
	fd_from = open(av[1], O_RDONLY);
	r = read(fd_from, buff, 1024);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fd_to, buff, r);
		if (w == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
		r = read(fd_from, buff, 1024);
		fd_to = open(av[2], O_WRONLY | O_APPEND);
	}
	close(fd_from);
	close(fd_to);
	free(buff);
	return (0);
}
