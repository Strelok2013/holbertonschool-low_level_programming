#include "lists.h"

/**
 * print_dlistint - all the nodes of a doulby linked list.
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: size_t, the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
