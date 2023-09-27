#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *P;
	listint_t *N;

	P = NULL;
	N = NULL;

	while (*head != NULL)
	{
		N = (*head)->next;
		(*head)->next = P;
		P = *head;
		*head = N;
	}

	*head = P;
	return (*head);
}
