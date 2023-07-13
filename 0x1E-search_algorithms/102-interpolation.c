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
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			found = pos;
			break;
		}
		else if (array[pos] < value)
			low = pos + 1;
		else
			high -= pos - 1;
	}
	return (found);
}
