#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: input
 * Return: sum, if empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
