#include <stdio.h>
#include "lists.h"

/**
 * listint - prints all the elements of listint
 * Return: number of nodes
 */
size_t print_listint(const listint *h)
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
