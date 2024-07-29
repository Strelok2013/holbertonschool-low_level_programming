#include "lists.h"

/**
 * add_node_end - adds a node to the end of a singly linked list
 * @head: pointer to the head of the singly linked list
 * @str: pointer to the string that will be contained inside the new node
 *
 * Return: list_t *, a pointer to the newly created node.
 */

list_t *add_node_end(list_t **head, const char*str)
{
	list_t *newNode = malloc(sizeof(list_t)), *last;
	unsigned int i = 0;
	char *dup;

	if (!newNode)
		return (NULL);
	dup = strdup(str);
	if (!dup)
	{
		free(newNode);
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	newNode->str = dup;
	newNode->len = i;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = newNode;
	}
	return (newNode);
}
