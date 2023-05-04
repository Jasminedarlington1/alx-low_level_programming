#include "main.h"
#include <stdio.h>
/**
 * get_bit -  function that returns the value of a bit at a
 * given index.
 * @n: number
 * @index: index
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int y;

	if (index > 98)
		return (-1);

	y = (n >> index) & 1;

	return (y);
}
