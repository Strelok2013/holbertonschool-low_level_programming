#include "lists.h"

/**
 * sum_dlistint - sums all the n values of the list
 * @head: pointer to the head of the list
 *
 * Return: int, the sum of all n values
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iterator = head;
	int sum = 0;

	if (!head)
		return (0);
	while (iterator)
	{
		sum += iterator->n;
		iterator = iterator->next;
	}
	return (sum);
}
