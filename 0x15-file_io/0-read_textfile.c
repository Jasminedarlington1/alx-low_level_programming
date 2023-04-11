#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: character
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char *buffer;
	ssize_t fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	{
		free(buffer);
		close(fd);
		return (w);
	}
}
