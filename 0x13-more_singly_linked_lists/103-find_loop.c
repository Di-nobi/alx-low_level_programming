#include "lists.h"
/**
 * find_listint_loop - a function that finds loops
 * @head: head pointer
 * Return: the address of node or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
{
	return (fast);
}
}
	return (NULL);
}
