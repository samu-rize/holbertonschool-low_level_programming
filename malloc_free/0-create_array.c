#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters dynamically with the given size and initializes
 *                each element with the specified character.
 * @size: The size of the array to be created.
 * @c: The character to initialize each element of the array with.
 *
 * Return: A pointer to the dynamically allocated array if successful, otherwise NULL.
 *
 * Description:
 *  - This function dynamically allocates memory for an array of characters with the given size.
 *  - If the size is 0, it returns NULL indicating an invalid size.
 *  - The function then initializes each element of the array with the specified character 'c'.
 *  - The allocated memory is returned to the caller.
 *  - It's the caller's responsibility to free the allocated memory using free() when done.
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
