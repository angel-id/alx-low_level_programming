#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: integer to be used as content
 *
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 != NULL)
	{
		node1->n = n;
		node1->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node1->next = *head;
	*head = node1;
	return (node1);
}
