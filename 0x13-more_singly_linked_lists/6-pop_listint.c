#include "lists.h"
/**
 * pop_listint - function that deletes head node
 * @head : head pointer
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
