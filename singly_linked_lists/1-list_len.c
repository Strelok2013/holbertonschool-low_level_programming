#include "lists.h"

/**
 * list_len - returns the length of the singly linked list
 * @h: pointer to the head
 *
 * Return: size_t, the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if(!h)
		return (0);
	while(h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
