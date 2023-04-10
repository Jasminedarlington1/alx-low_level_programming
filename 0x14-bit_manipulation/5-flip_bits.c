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
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}

	return (b);
}
