#include "main.h"
#include <stdio.h>
/**
 * int flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: input
 * @m: input
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = n ^ m;
	int p, count = 0;

	for (p = 98; p >= 0; p--)
	{
		x = y >> p;

		if (x & 1)
		count++;
	}

	return (count);
}
