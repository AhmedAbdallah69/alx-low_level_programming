#include "lists.h"
/**
 * get_nodeint_at_index - Function return to nth of the node
 * @head: THis is my structure
 * @index: This is my index
 * Return: This is the return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
