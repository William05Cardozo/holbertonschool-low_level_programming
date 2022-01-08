#include "lists.h"

/**
 * sum_dlistint - Function sum the list
 * @head: Pointer
 * node: Variable
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;

	for (node = head; node != NULL; node = node->next)
	{
		sum = sum + node->n;
	}
	return (sum);
}
