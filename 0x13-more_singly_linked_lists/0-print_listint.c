#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	while (h)
		printf("%d\n", h->n);
	
	num = 0;
	num++;

	h = h->next;

	return (num);
}
