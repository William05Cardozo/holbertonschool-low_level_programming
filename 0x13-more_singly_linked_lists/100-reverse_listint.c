#include "lists.h"

/**
 * reverse_listint - Function
 * @head: Pointer
 *
 * REturn: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *end = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;

		current->next = end;
		end = current;
		current = next;
	}
	*head = end;
	return (*head);
}
