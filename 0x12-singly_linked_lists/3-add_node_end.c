#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NEW, *Temp;
	size_t n;

	NEW = malloc(sizeof(list_t));
	if (NEW == NULL)
		return (NULL);

	NEW->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	NEW->len = n;
	NEW->next = NULL;
	Temp = *head;

	if (Temp == NULL)
	{
		*head = NEW;
	}
	else
	{
		while (Temp->next != NULL)
			Temp = Temp->next;
		Temp->next = NEW;
	}

	return (*head);
}
