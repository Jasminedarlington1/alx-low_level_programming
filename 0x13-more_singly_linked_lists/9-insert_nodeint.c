#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: pointer
 * @idx: index
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *str = head;
	size_t j;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n

	if (idx == 0)
	{
		new->next = str;
		*head = new;
		return (new);
	}

	for (j = 0; j < (idx - 1); j++)
	{
		if (str == NULL || str->next == NULL)
			return (NULL);

		str = str->next;
	}

	new->next = str->next;
	str->next = new;

	return (new);
}
