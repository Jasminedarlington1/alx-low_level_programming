#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m;
	unsigned int t = 0;

	while (b != 0)
	{
		t += b & 1;
		b >>= 1;
	}
	return (t);
}
