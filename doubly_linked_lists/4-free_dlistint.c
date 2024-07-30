#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head
 *
 * Return: void, returns a null void pointer
 */

void free_dlistint(dlistint_t  *head)
{
	dlistint_t *nextNode;

	if (!head)
		return;
	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
