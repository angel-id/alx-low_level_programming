#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head pointer
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t newnodes = 0;
	listp_t *headptr, *new, *add;

	headptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = headptr;
		headptr = new;

		add = headptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(&headptr);
				return (newnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		newnodes++;
	}

	free(&headptr);
	return (newnodes);
}
