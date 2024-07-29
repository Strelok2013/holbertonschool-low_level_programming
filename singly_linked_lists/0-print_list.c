#include "lists.h"

/**
 * print_list - prints the contents of a singly linked list
 * @h: pointer to the head.
 *
 * Return: size_t, the size of the list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
