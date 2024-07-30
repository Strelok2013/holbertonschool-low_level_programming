#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to the pointer of the head
 * @n: integer value to assign
 *
 * Return: dlistint_t the newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *last;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	newNode->prev = last;
	last->next = newNode;
	return (newNode);
}
