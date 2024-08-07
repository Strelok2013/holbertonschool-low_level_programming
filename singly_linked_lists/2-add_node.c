#include "lists.h"

/**
 * add_node - adds a node at the start of the singly linked list
 * @head: pointer to the head of the singly linked list
 * @str: pointer to a string which will be contained in the node
 *
 * Return: list_t *, a pointer to the newly created node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
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
	newNode->next = *head;
	*head  = newNode;
	return (newNode);
}
