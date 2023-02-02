#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of the linked list
 * @index: index of the node, starting at 0
 * Return: the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index; i++)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}
