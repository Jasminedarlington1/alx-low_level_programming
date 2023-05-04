#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a
 * given index
 * @n: parameter
 * @index:index
 * Return: 1 if it works or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
