#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NEW;
	size_t N;

	NEW = malloc(sizeof(list_t));
	if (NEW == NULL)
		return (NULL);

	NEW->str = strdup(str);

	for (N = 0; str[N]; N++)
		;

	NEW->len = N;
	NEW->next = *head;
	*head = NEW;

	return (*head);
}
