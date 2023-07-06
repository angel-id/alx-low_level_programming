#include "lists.h"

/**
 * find_listint_loop - finds the loop contained
 * in a linked list
 * @head : head pointer
 *
 * Return: pointer the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fnode, *snode;

	if (head == NULL || head->next == NULL)
		return (NULL);

	fnode = head->next;
	snode = (head->next)->next;

	while (snode)
	{
		if (fnode == snode)
		{
			fnode = head;

			while (fnode != snode)
			{
				fnode = fnode->next;
				snode = snode->next;
			}

			return (fnode);
		}

		fnode = fnode->next;
		snode = (snode->next)->next;
	}

	return (NULL);
}
