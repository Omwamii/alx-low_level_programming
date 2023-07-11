#include "search_algos.h"


/**
 * interpolation_search - perform interpolation search on array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index where value found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int found = -1;
	size_t pos, high = size - 1, low = 0;

	if (!array)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (pos > size - 1)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	low = pos;
	while (low <= high)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
		{
			found = pos;
			break;
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		low = pos;
	}
	return (found);

}
