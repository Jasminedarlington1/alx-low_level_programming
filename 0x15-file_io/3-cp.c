#include "main.h"
int copy_to_file(const char *file_from, char *file_to);
/**
 * main - entry point
 * @ac: argument
 * @av: argument
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(av[1], av[2]);
	return (0);
}
/**
 * _close - function that closes fd
 * @fd: parameter
 * Return: 0
 */
int _close(int fd)
{
	int y;

	y = close(fd);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
/**
 * copy_to_file - function that copys file contents
 * @file_from: parameter
 * @file_to: parameter
 * Return: 1
 */
int copy_to_file(const char *file_from, char *file_to)
{
	int fd1, fd2, x;
	ssize_t r, w;
	size_t size = 1024, y = 0;
	char *buffer;

	fd1 = open(file_from, O_RDONLY);
	buffer = malloc(size * sizeof(char));
	r = read(fd1, buffer, size);
	if (fd1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	for (x = 0; x < r; x++)
	{
		y += 1;
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		fd2 = open(file_to, O_WRONLY | O_CREAT);
		chmod(file_to, 00664);
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	w = write(fd2, buffer, y);
	if (w == -1 || w != r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	_close(fd1);
	_close(fd2);
	free(buffer);
	return (1);
}
