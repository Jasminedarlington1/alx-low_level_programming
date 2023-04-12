#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: character
 * @text_content: input
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, w, a;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}
	k = open(filename, O_WRONLY | O_APPEND);
	w = write(k, text_content, a);

	if (k == -1 || w == -1)
		return (-1);

	close(k);

	return (1);
}
