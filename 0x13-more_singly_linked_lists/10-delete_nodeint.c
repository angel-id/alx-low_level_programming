#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node by a given
 * index of a linked list
 * @head : head pointer
 * @index: index of the node to be deleted
 * indices starting at 0
 * Return: 1 if function succeeds,
 * -1 if function fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	node = 0;
	while (node < (index - 1);)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
		node++;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
