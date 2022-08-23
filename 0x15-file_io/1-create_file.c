#include "main.h"
/**
 * create_file - function creates file
 * @filename: name of the file to be created
 * @text_content: content for the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
	while (text_content != NULL)
		len++;
	w = write(fd, text_content, len);
	if (w < 0)
		return (-1);
	}
	close(fd);
	return (1);
}
