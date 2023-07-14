#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return (ptr);
	}
	free(ptr);
}
