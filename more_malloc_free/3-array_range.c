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
	int i, n, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;
	ptr = malloc((n) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for ( i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}
	ptr[n] = '\0';
	
	return (ptr);
	free(ptr);
}
