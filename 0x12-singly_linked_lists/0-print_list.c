#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print list
 * @h: the  head of list
 * Return: elements number
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
		for (h = h; h != NULL; h = h->next)
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
	return (count);
}
