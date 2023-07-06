#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head : head pointer
 * Return: sum of all the data (n),
 *         or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
