#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
{
	head->next = new;
	free(head);

	head = new;
}
}
