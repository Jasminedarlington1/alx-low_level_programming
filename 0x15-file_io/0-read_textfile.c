#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char b;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);

	b = malloc(sizeof(char) * letters);
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	close(fd);
	free(b);

	return (0);
}
