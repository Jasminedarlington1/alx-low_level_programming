#include "main.h"
/**
 * helperfunction - returns 0 or 1
 * @num: number being checked
 * @i: possible factor of the number
 * Return: 0 if not prime, 1 if prime
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	return (1);
}
/**
 * is _prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input
 * Return: 1 if its a primenumber otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperfunction(n, 2));
}
