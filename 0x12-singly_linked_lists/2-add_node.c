#include "lists.h"

/**
 * len - Calculates the length of a string.
 *
 * @str: Constant string
 *
 * Return: The length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to the head of the linked list
 * @str: String to be assigned to the node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node

	if (head == NULL || str == NULL)
		return (NULL);

	*new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
		}

	new_node->len = len(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
