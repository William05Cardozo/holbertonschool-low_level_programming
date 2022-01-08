#include "lists.h"

/**
 * *add_dnodeint_end - add node in end the list
 * @head: Double Pointer
 * @n: Variable
 * endnode: Last Node
 * Return: Head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode;
	dlistint_t *endlist = *head;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;

	if (*head != NULL)
	{
		while (endlist->next != NULL)
		{
			endlist = endlist->next;
		}
		endlist->next = endnode;
	}
	else
	{
		*head = endnode;
	}
	endnode->prev = endlist;
	return (*head);
}
