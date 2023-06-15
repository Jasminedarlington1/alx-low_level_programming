#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: parameter
 * Return: the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}
	return (cont);
}
