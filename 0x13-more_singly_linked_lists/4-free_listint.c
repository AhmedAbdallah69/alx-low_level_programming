#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
