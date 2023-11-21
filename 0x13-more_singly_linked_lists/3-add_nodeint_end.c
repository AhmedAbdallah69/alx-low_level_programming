#include "lists.h"
/**
 * add_nodeint_end - Add a new node in the end of the node
 * @head: This is my struct
 * @n: This is the int take in my linked list.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	return (*head);
}
