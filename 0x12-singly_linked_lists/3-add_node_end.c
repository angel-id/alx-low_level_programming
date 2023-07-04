#include "lists.h"

/**
 * add_node_end - a function that dds a new node at the end
 * of a list_t list.
 * @head: head of the singly list.
 * @str: string to store
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	n = 0;
	while (str[n])
		n++;
	;

	new_node->len = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
