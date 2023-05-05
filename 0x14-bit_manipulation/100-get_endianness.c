#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if its a big endian, 1 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *) &x;

	return (*p);
}
