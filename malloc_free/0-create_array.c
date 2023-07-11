#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters dynamically with the given
 * size and initializes
 * each element with the specified character.
 *
 * @size: The size of the array to be created.
 * @c: The character to initialize each element of the array with.
 *
 * Return:
 *    - A pointer to the dynamically allocated array if successful.
 *    - NULL if size is 0 or if memory allocation fails.
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *) malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
		free(ptr);
	}
}
