#include "lists.h"

/**
 * reverse_listint - Function
 * @head: Pointer
 * other: Variable
 * current: Variable
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *other, *current;

	if (*head == NULL)
	{
		return (NULL);
	}

	current = *head;
	*head = current->next;
	other = (*head)->next;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (other != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = other;
		other = (*head)->next;
	}
	(*head)->next = current;
	return (*head);
}
