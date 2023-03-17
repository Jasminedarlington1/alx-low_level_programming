#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: unsigned int
 * Return: if function fails ,return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, size;
	unsigned int i, j, len;

	i = 0;

	while (s1[i] != '\0')
		i++;
	j = 0;

	while (s2[j] != '\0')
		j++;

	if (j > n)
		j = n;

	size = i + j;

	ptr = malloc(sizeof(char) * size + 1);

		if (ptr == 0)
			return (NULL);
	for (len = 0; len < i; len++)

		ptr[len] = s1[len];

	for (len = 0; len < j; len++)
		ptr[len + i] = s2[len];
			ptr[len + i] = '\0';

				return (ptr);
}
