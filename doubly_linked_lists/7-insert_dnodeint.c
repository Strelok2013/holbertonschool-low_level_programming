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
	unsigned int i = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *node = *h;

	newNode->n = n;
	if(!newNode)
		return (NULL);
	while (i != idx)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
		i++;
	}
	newNode->prev = node->prev;
	newNode->next = node;
	node->prev->next = newNode;
	node->prev = newNode;
	return (newNode);
}
