#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *P2;
	listint_t *prev;

	P2 = head;
	prev = head;
	while (head && P2 && P2->next)
	{
		head = head->next;
		P2 = P2->next->next;

		if (head == P2)
		{
			head = prev;
			prev =  P2;
			while (1)
			{
				P2 = prev;
				while (P2->next != head && P2->next != prev)
				{
					P2 = P2->next;
				}
				if (P2->next == head)
					break;

				head = head->next;
			}
			return (P2->next);
		}
	}

	return (NULL);
}
