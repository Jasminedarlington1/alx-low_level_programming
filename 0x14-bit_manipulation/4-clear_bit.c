#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: input
 * @index: index
 * Return: 1 0n success -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
