#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 * Return: Index of the first occurrence of the value, or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i)
		i++;
	}
	return (-1);
}
