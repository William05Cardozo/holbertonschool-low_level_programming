#include "lists.h"


void free_listint2(listint_t **head)
{
	listint_t *release;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		release = *head;
		*head = (*head)->next;
		free(release);
	}
}
