#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a dlistint_t list
 * @head: doubly pointing to the list
 * @n: data
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
		if (*head)
		{
			(*head)->prev =tmp;
		}
		*head = tmp;
			return (tmp);
	}
	else
		return (NULL);
}
