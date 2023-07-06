#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a list
 * @head : head pointer
 * @index: index of the node to find, starting at 0
 * Return: pointer to the node,
 *         or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
