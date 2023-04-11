#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file -  function that creates a file
 * @filename: character
 * @text_content: character
 * Return: --1 on failure, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 2);
	w = write(fd, text_content, c);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
