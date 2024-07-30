#include "lists.h"

/**
 * dlistint_len - returns the number of node in a doubly linked list
 * @h: head of the doubly linked list
 *
 * Return: size_t, the number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
