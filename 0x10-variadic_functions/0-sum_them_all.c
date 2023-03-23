#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 * @...: variable
 * Return: 0,if otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum;

	va_start(p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
