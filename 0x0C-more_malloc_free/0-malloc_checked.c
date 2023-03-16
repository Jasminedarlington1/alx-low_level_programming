#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: input
 * Return: pointer to the allocated memory
 * a status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);
	return (ptr);
}
