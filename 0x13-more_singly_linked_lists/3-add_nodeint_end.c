#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: head
 * @n: integer
 * Return: the address of the new element or null if fialed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
{
        return (NULL);
}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
{
	*head = new;
	return (new);
}
	while (tmp->next)
	tmp = tmp->next;
	
	tmp->next = new;

	return (new);
}
