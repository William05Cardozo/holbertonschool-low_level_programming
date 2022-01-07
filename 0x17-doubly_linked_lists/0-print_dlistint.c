#include "lists.h"

/**
 * print_dlistint - Function Print
 * @h: Pointer
 * nnode: Number of nodes
 * Return: nnode
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nnode;

	for (nnode = 0; h != NULL; nnode++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnode);
}
