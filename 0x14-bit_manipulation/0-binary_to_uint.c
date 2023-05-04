#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: parameter
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	 int j;

	if (b == NULL)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);

		a += 1 * a + (b[j] - '0');
	}

	return (a);
}
