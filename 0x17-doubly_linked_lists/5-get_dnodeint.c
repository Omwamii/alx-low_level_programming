#include "lists.h"

/**
 * get_dnodeint_at_index - get node at nth position
 * @head: head of list
 * @index: index of node to get
 *
 * Return: node element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (pos == index)
			return (current);
		current = current->next;
		pos++;
	}
	return (NULL);
}
