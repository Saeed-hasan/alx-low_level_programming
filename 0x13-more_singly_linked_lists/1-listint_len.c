#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in the list
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (h = h; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
