#include "lists.h"

/**
 * delete_dnode_at_index - deletes node at index
 * @head: head ptr
 * @index: index of node to delete
 *
 * Return 1 if succeeded else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);

	while (index != 0)
	{
		if (current == NULL)
			return (-1); /* index out of bounds */
		current = current->next;
		index--;
	}

	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL) /* more than one item in list */
			(*head)->prev = NULL; /* new first node */
	}

	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
