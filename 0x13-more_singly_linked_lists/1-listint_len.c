#include "lists.h"
#include <stdio.h>
/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t o = 0;

	while (h)
	{
	o++;
	h = h->next;
	}
	return (o);
}
