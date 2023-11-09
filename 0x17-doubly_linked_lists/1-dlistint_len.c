#include "lists.h"
/**
 * print_dlistint - fun that print a linked list
 * @h: pointer to the first element in the list
 * Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}

	return (i);
}
