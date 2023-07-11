#include "search_algos.h"

/**
 * jump_list - ptr to head of list
 * @list: ptr to head of list
 * @size: number of nodes in list
 * @value: value to be searched
 *
 * Return: pointer to where first value located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list, *high, *low = list, *found = NULL;
	size_t count, end, jump;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	end = jump;
	while (tmp->n < value)
	{
		while (end >= size)
			end--, jump--;
		low = tmp, count = jump;
		while (count > 0)
		{
			tmp = tmp->next;
			count--;
		}
		high = tmp;
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		end += jump;
		if (!tmp->next)
			break; /* reached end of list */

	}
	printf("Value found between indexes [%lu] and [%lu]\n", low->index,
			high->index);
	if (end > size)
		end = size - 1;
	tmp = low;
	while (tmp)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n == value)
		{
			found = tmp;
			break;
		}
		tmp = tmp->next;
	}
	return (found);
}
