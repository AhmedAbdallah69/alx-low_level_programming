#include "lists.h"

/**
 * print_list - Outputs all elements of a list_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 *         If str is NULL, prints [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);

		count += 1;
		h = h->next;
	}
	return (count);
}
