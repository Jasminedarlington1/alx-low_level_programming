#include "main.h"
/**
 *_isupper -  function that checks for uppercase character.
 *@c: character to be checked
 *
 *Return: 0
 */

int _isupper(int c)
{
	int i;

for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{return (1);
}
}
return (0);
}
