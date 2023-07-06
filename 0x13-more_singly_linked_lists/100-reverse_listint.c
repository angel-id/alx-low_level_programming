#include "lists.h"

/**
 * reverse_listint - function that reverses linked lists
 * @head: head pointer
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *n;

	x = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = n;
	}

	*head = x;
	return (*head);
}
