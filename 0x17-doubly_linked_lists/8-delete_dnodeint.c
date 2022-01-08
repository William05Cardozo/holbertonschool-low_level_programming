#include "lists.h"

/**
 * delete_dnodeint_at_index - Function for delete
 * @head: Double Pointer
 * @index: index
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dnodes, *next, *previ;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (dnodes = *head, i = 0, previ = NULL; dnodes && i < index; i++)
	{
		previ = dnodes;
		dnodes = dnodes->next;
	}
	if (dnodes == NULL)
		return (-1);

	next = dnodes->next;
	if (previ == NULL)
	{
		free(dnodes);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		previ->next = NULL;
		free(dnodes);
	}
	else
	{
		previ->next = next;
		next->prev = previ;
		free(dnodes);
	}
	return (1);
}
