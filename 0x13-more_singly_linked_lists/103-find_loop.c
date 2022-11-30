#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - a function that finds loops
 * @head: head pointer
 * Return: the address of node or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head;
	listint_t *tmp2 = head;

	while (tmp != NULL && tmp2 != NULL && tmp2->next != NULL)
{
	tmp = tmp->next;
	tmp2 = tmp2->next->next;

	if (tmp == tmp2)
{
	tmp  = head;
	while (tmp2 != tmp)
{
	tmp2 = tmp2->next;
	tmp = tmp->next;
}
return (tmp);
}
}
return (NULL);
}
