#include "lists.h"

/**
 * print_dlistint - prints a  doubly linked list
 * @h: pointer to the list
 * Retrun: number of nodes in the list
 */
size3_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->data);
		h = h->next;
		num++;
	}
	return (num);
}
