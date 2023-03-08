#include "main.h"
/**
 * helperfunction - checks if sqrt of number exists
 * @num: number
 * @sqrt: possible sqrt of number
 * Return: square root of number to -1 for error
 */
int helperfunction(int num, int sqrt)
{
	if (sqrt * sqrt == num)
	{
		return (sqrt);
	}
	else
	{
		if ((sqrt * sqrt) > num)
			return (-1);

	return (helperfunction(num, sqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * Return: natural square root n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helperfunction(n, 0));
}
