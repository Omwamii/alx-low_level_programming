#include "search_algos.h"

/**
 * jump_search - perform jump search on array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index where value found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int start = 0, end, i, found = -1;

	if (!array)
		return (-1);
	end = sqrt(size);
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	while (start < (int)size - 1 && array[end] < value)
	{
		start = end;
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		end += sqrt(size);
		if (end > (int)size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end > (int)size)
		end = (int)size - 1;
	for (i = start; i < end + 1; i++)
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
