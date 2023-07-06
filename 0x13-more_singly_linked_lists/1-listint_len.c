#include "lists.h"

/**
 * listint_len - counts the number of nodes
 * @h: head of the singly linked list
 *
 * Return: number of elements or nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
