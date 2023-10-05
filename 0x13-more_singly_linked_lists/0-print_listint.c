#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of NODES.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (h = h; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		count++;
	}
	return (count);
}
