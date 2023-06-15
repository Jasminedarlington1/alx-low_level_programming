#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *next_node;

	if (head)
	{
		node = head;
		next_node = head->next;
		while (next_node)
		{
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node);
	}
}
