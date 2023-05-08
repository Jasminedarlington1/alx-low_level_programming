#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: character
 * @text_content: parameter
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;
	ssize_t w, r = 0;
	size_t y;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
		if (w == -1 || w != r)
			return (-1);
	}
	close(fd);
	return (1);
}
