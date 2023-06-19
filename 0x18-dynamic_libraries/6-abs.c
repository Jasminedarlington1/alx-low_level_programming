#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: parameter to be found
 *
 * Return: Absolute value of the number
 */

int _abs(int a)
{
	if (a < 0)
		a *= -1;

	return (a);
}
