#include "search_algos.h"

/**
 * linear_search - perform linear search on array
 * @array: array to search
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i, found = -1;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = i;
			break;
		}
	}
	return (found);
}
