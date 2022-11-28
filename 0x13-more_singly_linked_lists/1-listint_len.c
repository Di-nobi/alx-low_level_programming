#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns number of elements in a linked list
 * @h: header
 * Return: Number of elements ina linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
