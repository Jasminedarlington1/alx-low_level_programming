#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, p, x;
	char *buff;
	int fd;
	size_t y = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == 1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	if (r == -1)
		return (0);

	for (x = 0; x < r; x++)
		y += 1;
	p = write(STDOUT_FILENO, buff, r);
	if (p == -1 || p != r)
		return (0);
	close(fd);
	free(buff);

	return (r);
}
