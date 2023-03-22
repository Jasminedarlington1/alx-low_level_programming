#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - entry point
 * @a: input
 * @b: input
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry point
 * @a: input
 * @b: input
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry point
 * @a: input
 * @b: input
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry point
 * @a: input
 * @b: input
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - entry point
 * @a: input
 * @b: input
 * Return: 0
 */
int op_mod(int a, int b)
{
	a = 0;

	while (a % b)
	{
		printf("Error\n");
		exit(100);
	}
}
