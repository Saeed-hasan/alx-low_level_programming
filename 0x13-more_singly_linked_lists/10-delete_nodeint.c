#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev = *head;
	listint_t *current = *head;


	if (*head == NULL)
	{
		return (-1);
	}

	else if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}



	else
	{
		while (index != 1)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
	}

	return (1);
}
