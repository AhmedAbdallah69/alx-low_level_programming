#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free nodes and list
 * @head: This is my struct
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
	next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
