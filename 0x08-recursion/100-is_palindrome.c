#include "main.h"
/**
 * _length - checks the lenght of a string
 * @s: is the string
 * Return: the length of s string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checkp - checks if the string is a palindrome
 * @i: input
 * @lg: input
 * @s: is a string
 * Return: 1 if it is a palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
			return (checkp(i + 1, lg - 1, s));
	else if (s[i] != s[lg])
		return (0);
	else
		return (1);
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: return 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
