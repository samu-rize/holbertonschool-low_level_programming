#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and performs an action
 * on each element.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @action: A pointer to the function used to perform the action
 * on each element.
 *
 * Description: This function takes an array, its size, and a function pointer
 * as arguments.
 * If the array is NULL, the size is 0, or the function pointer is NULL,
 * the function does nothing. Otherwise, it iterates through the array
 * and calls the function pointed by 'action' to perform an action
 * on each element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size == 0 || !cmp)
	{
		return
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}
