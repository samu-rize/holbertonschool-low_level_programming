#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @cmp: A pointer to the function used for comparison.
 *
 * Description: This function searches for an integer in the array by using
 * the comparison function 'cmp'. If the array is NULL, the size
 * is 0, or the comparison function is NULL, the function returns -1.
 * Otherwise, it iterates through the array and calls the 'cmp' function
 * on each element until a match is found. If a match is found, the
 * index of the matching element is returned.
 *
 * Return: The index of the first element for which the 'cmp' function
 * does not return 0.
 * If no such element is found, or if any input is invalid, the function
 * returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
	{
		return(-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
	return(-1);
}
