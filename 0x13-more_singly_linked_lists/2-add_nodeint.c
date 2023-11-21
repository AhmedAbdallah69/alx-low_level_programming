#include "lists.h"
/**
 * add_nodeint - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @n: Int to assigned to the node
 * Return: Pointer to the head of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof (listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
