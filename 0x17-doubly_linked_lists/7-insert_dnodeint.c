#include "lists.h"

/**
 * insert_dnodeint_at_index - Function add node
 * @h: Double Pointer
 * @idx: Index
 * @n: Varaible
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *nnode, *previ, *count;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = NULL;
	count = *h;
	previ = NULL;
	while (count != NULL)
	{
		if (i == idx)
		{
			previ->next = nnode;
			nnode->prev = previ;
			nnode->next = count;
			count->prev = nnode;
			return (nnode);
		}
		if ((i == idx - 1) && (count->next == NULL))
		{
			count->next = nnode;
			nnode->prev = count;
			return (nnode);
		}
		previ = count;
		count = count->next;
		i++;
	}
	free(nnode);
	return (0);
}
