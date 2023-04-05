#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer
 * @index: index of the node to delete
 *
 * Return: 1 or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(l);
		return (1);
	}

	while (i < index - 1)
	{
		if (!l || !(l->next))
			return (-1);
		l = l->next;
		i++;
	}


	current = l->next;
	l->next = current->next;
	free(current);

	return (1);
}
