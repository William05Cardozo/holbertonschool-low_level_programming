#include "lists.h"

/**
 * get_dnodeint_at_index - Function for get a node
 * @head: Pointer
 * @index: index of the node
 * count: Iterator
 * Return: Head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		else
		{
		return (NULL);
		}
	}
	return (head);
}
