#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specified index
 * @head: pointer to the head
 * @index: index to go to
 *
 * Return: dlistint_t, the node at given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return(NULL);
	while (i != index)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
}
