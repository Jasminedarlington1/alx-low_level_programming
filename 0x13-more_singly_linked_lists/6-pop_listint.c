#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *l;
	int n;

	if (!head)
		return (0);

	n = (*head)->n;
	l = (*head)->next;
	free(*head);
	*head = l;

	return (n);
}
