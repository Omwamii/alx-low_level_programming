#include "search_algos.h"

int b_search(int *array, int left, int right, int value);
/**
 * advanced_binary - perform binary search on array
 * @array: array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: first index where value occurs
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (b_search(array, 0, (int)size - 1, value));
}

/**
 * b_search - recursively find first index for value
 * @array: array to search item
 * @left: low limit for sub-array
 * @right: high limit for sub-array
 * @value: value to find
 *
 * Return: first index of value found
 */
int b_search(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right)
		return (-1);
	if (left == right && array[left] == value)
		return (left);
	printf("Searching in array: ");
	for (i = left; i < right + 1; i++)
	{
		if (i != left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
	mid = (left + right) / 2;
	if (value <= array[mid])
		return (b_search(array, left, mid, value));
	else
		return (b_search(array, mid + 1, right, value));
}
