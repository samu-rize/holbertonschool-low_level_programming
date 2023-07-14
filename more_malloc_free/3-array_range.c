#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers containing a range of values.
 * @min: The minimum value (inclusive) for the range.
 * @max: The maximum value (inclusive) for the range.
 *
 * Return: A pointer to the newly created array of integers.
 *        If malloc fails or if min is greater than max,
 *        the function returns NULL.
 */

int *array_range(int min, int max)
{
	int n, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min;
	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
	free(ptr);
}
