#include "lists.h"
/*
 * add_node - adds a new node at the beginning of a dlistint_t list
 * @n: integer
 * @head: head
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (tmp)
	{
		tmp->n = n;
		tmp->next = *head;
		tmp->prev = NULL;
		*head = tmp;
			return (tmp);
	}
	else
		return (NULL);
}
