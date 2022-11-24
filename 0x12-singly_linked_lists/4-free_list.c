#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_list - frees memory of a list
 * @head: pointer to head of singly linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free_list(head->str);
	free(head);
}
