#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *forw = NULL;

	while (*head)
	{
		forw = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = forw;
	}
	*head = prev;

	return (*head);
}
