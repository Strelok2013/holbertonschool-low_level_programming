#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes/frees a node at given index
 * @head: pointer to pointer of the head
 * @index: index at which to delete/free
 *
 * Return: int, the exit code of the function, -1 or 1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (!*head)
		return (-1);
	while (index)
	{
		if (!node)
			return (-1);
		node = node->next;
		index--;
	}

	if (node == *head)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
