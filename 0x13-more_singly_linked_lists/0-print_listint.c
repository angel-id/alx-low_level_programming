#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
