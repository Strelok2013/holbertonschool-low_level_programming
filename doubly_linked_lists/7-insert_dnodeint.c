#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node before a given index
 * @h: pointer to pointer to the head
 * @idx: index at which to insert
 * @n: value to assign to the node
 *
 * Return: dlistint_t *, pointer to the newly inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx)
	{
		node = node->next;
		if (!node)
			return (NULL);
		idx--;
	}
	if (!node->next)
		return (add_dnodeint_end(h, n));
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = node;
	newNode->next = node->next;
	node->next->prev = newNode;
	node->next = newNode;
	return (newNode);
}
