#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	listint_t *str;
	int sum;

	str = head;
	sum = 0;

	while (str != NULL)
	{
		sum += str->n;
		str = str->next;
	}
	return (sum);
}
