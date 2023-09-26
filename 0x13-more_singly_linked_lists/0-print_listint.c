#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of NODES.
 */
size_t print_listint(const listint_t *h)
{
	size_t NODES = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		NODES++;
	}
	return (NODES);
}
