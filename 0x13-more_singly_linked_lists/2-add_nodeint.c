#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint -  function that adds a new node at the
 * beginning of a listint_t list.
 * @head: new node
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (!p)

	return (NULL);

	p->n = n;

	p->next = *head;

	*head = p;

	return (p);
}
