#include "search_algos.h"

/**
 * linear_skip - perform jump search on skip list
 * @list: ptr to head of list
 * @value: value to be searched
 *
 * Return: pointer to where first value located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp, *high, *low = list, *found = NULL;

	if (!list)
		return (NULL);
	tmp = list->express; /* first jump */
	while (1)
	{
		if (!tmp->next)
			break; /* reached end of list */
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n < value)
		{
			low = tmp;
			if (tmp->express)
				tmp = tmp->express;
			else /* end of express, go to list end */
			{
				while (tmp->next)
					tmp = tmp->next;
			}
		}
		else
			break;
	}
	high = tmp;
	printf("Value found between indexes [%lu] and [%lu]\n", low->index,
			high->index);
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
