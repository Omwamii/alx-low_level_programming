# include "lists.h"

/**
 * print_dlistint - print content in double list
 * @h: header pointer
 *
 * Return: elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	const dlistint_t *current = head;
	size_t printed = 0;

	if (head == NULL)
		return (printed);
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		printed++;
	}

	return (printed);
}
