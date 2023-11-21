#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp1, *temp2, *new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!head || !*head)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp1 = *head;
	for (; i < idx - 1; i++)
	{
		temp1 = temp1->next;
		if (temp1 == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
	}
	temp2 = temp1->next;
	temp1->next = new;
	new->next = temp2;
	return (*head);
}
