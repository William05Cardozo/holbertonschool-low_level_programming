#include "lists.h"

/**
 * reverse_listint - Function
 * @head: Pointer
 *
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *end;
	listint_t *current;

	current = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	*head = current->next;
	end = (*head)->next;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (end != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = end;
		end = (*head)->next;
	}
	(*head)->next = current;
	return (*head);
}
