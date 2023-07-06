#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *ptr = *head;

	node1 = malloc(sizeof(listint_t));
	if (node1 != NULL)
	{
		node1->n = n;
		node1->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node1;
	}
	else
		*head = node1;
	return (node1);
}
