#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a struct.
 * @h: pointer to the list_t list to print
 *
 * Return: length of the elments.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
