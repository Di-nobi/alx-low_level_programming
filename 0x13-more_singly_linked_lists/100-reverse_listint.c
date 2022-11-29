#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - a function that reverses linked list
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *curnode;
	prevnode = NULL;
	curnode = NULL;

	while (*head)
{
	curnode = (*head)->next;
	(*head)->next = prevnode;
	prevnode = *head = curnode;
}
	*head = prevnode;
	return (*head);
}

