#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *temp;

		temp = head;
		free(temp);
		head = head->next;
	}
}
