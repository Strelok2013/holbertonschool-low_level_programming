#include "lists.h"

/**
 * add_dnodeint - Adds a node to the start of a doubly linked list
 * @head: pointer to pointer of the head
 * @n: int value to assign to the node
 *
 * Return: dlistint_t, the newly added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev= newNode;
	*head = newNode;
	return (newNode);
}
