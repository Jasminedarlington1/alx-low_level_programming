#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint *prev = NULL;
	listint_t *curr = *head;
	listint_t *spr;

	while (curr)
	{
		spr = curr->next;
		cur->next = prev;
		prev = curr;
		curr = spr;
	}
	return (prev);
}
