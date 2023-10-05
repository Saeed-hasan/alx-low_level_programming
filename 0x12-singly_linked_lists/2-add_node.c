#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*add_node - fun that add new node to the linked list
*@head: duoble pointer to points to what head points to
*@str: str that we want to add to the node
*Return: address of the new node, NULL if no str
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	/* create new node */
	n = malloc(sizeof(list_t));
	if (n != NULL)
	{
		n->str = strdup(str);/* duplicate the str in the new node */
		n->len = strlen(str);/* add the len to the n  */
		n->next = NULL;
		/* make the n points to what head points to  */
		n->next = *head;
		/* make the head points to the newNode */
		*head = n;
	}
	return (*head);
}	
