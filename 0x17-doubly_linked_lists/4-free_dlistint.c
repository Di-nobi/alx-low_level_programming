#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
