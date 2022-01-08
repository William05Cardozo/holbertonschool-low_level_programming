#include "lists.h"

/**
 * dlistint_len - Function Print Elements
 * @h: Pointer
 * elemnt: Elements to print
 * Return: elemnt
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elemnt;

	for (elemnt = 0; h != NULL; elemnt++)
	{
		h = h->next;
	}
	return (elemnt);
}
