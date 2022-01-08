#include "lists.h"

/**
 * free_dlistint - Function for free list
 * @head: Pointer
 * Return: No Line
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *release;

	node = head;

	while (node != NULL)
	{
		release = node->next;
		free(node);
		node = release;
	}
}
