#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @n: integer
 * @h: head
 * Return: address of the new of the new intger or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = (listint_t *)malloc(sizeof(listint_t));
	
	if (tmp != NULL)
{
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
else
return (NULL);
}
