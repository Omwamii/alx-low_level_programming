#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *tmp = head;

	while (tmp)
	{
		current = tmp;
		tmp = tmp->next;
		free(current);
	}
}
