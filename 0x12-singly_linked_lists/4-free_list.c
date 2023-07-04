#include "lists.h"

/**
 * free_list - frees a singly list
 * @head: head of the singly list.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *n_node;

	while ((n_node = head) != NULL)
	{
		head = head->next;
		free(n_node->str);
		free(n_node);
	}
}
