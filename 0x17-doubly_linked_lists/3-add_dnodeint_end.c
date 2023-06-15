#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: parmeter
 * @n: parameter
 * Return: a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *a = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (a)
	{
		while (a->next)
			a = a->next;
		new_node->prev = a;
		a->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
