#include "lists.h"

/**
 * *add_dnodeint - addnode at he beginning
 * @head: Double Pointer
 * @n: Variable
 * nnode: New Node
 * Return: Head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = *head;
	*head = nnode;
	return (*head);
}
