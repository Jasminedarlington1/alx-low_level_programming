#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer
 * @index: function that returns the nth node of a listint_t linked list.
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; (j < index) && (head->next); j++)
		head = head->next;

	if (j < index)
		return (NULL);

	return (head);
}
