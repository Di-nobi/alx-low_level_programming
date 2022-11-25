#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0], (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->n, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
