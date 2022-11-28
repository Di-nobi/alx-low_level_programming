#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that  prints all the ewlements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nunodes = 0;

	while (h != NULL)
{
		printf("%d\n", h->n);
		h = h->next;
	nunodes++;
}
return (nunodes);
}
