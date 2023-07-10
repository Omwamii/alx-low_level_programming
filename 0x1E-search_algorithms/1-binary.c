#include "search_algos.h"

/**
 * binary_search - perform binary search on array
 * @array: array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: value index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, mid, i, found = -1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			if (i != l)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (l + r) / 2;
		if (value == array[mid])
		{
			found = mid;
			break;
		}
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (found);
}
