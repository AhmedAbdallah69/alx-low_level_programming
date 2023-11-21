#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
