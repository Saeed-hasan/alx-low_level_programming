#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
