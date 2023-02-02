#include "lists.h"

/**
 * listint_len -returns the number of a element
 * @h: pointer that points to the struct
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
