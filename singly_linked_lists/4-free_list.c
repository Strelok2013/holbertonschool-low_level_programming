#include "lists.h"

/**
 * free_list - frees a list given a head of a singly linked list
 * @head: pointer to the head of the singly linked list.
 *
 * Return: void, returns a null void pointer.
 */

void free_list(list_t *head)
{
	list_t* next_node;

	if (!head)
		return;
	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
