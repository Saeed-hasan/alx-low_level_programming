#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - list length
 * @h: the first node
 * Return: elements number
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	for (h = h; h != NULL; h = h->next)
	{
		counter++;
	}

	return (counter);
}
