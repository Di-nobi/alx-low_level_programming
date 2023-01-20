#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a dlistint_t list
 * @head: pointing to a doubly linked list
 * @n: integer
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	
	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;
        
	while ((*head)->next)
	{
		*head = (*head)->next;

		(*head)->next = newNode;
		newNode->prev = *head;
	}
	}
	else
		return (NULL);
}
