#include "main.h"

/**
 * create_file - function that creates a file.
 * @text_content: parameter
 * @filename: parameter
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x;
	size_t y = 0;
	ssize_t r = 0, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (x = 0; text_content[x] != '\0'; x++)
		{
			y += 1;
			r += 1;
		}
		w = write(fd, text_content, y);
		if (w == -1 || r != w)
			return (-1);
	}
	close(fd);
	return (1);
}
