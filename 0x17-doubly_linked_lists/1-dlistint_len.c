#include "lists.h"

/**
 * dlistint_len - return list length
 * @h: head pointer
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	const dlistint_t *current = head;
	size_t len = 0;

	if (head == NULL)
		return (len);
	while (current)
	{
		len++;
		current = current->next;
	}

	return (len);
}
