#include "search_algos.h"

/**
 * exponential_search - perform exponential search on array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index of value found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, high, low = 0, mid, found = -1;

	while (1)
	{
		if (i > size - 1)
		{
			high = size - 1;
			break;
		}
		if (array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			low = i, i *= 2, high = i;
		}
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (low + high) / 2;
		if (value == array[mid])
		{
			found = mid;
			break;
		}
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (found);
}
