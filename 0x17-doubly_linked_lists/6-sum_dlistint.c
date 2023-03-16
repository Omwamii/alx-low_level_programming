#include "lists.h"

/**
 * sum_dlistint - prints sum of list
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
