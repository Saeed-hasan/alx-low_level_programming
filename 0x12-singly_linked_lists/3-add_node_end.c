#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *ptr;

	n = malloc(sizeof(list_t));
	if (n != NULL)
	{
		n->str = strdup(str);
		n->len = strlen(str);
		n->next = NULL;
	}

	ptr = *head;
	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = n;
	}
	return (*head);
}
