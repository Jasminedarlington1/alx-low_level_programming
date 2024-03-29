#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - entry point
 * @array: input
 * @size: input
 * @cmp: input
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
