#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list.
 * @head: pointer
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *l;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (p);

	p->n = n;
	p->next = NULL;
	if (*head == NULL)
		*head = p;
	else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = p;
	}
	return (p);
}
