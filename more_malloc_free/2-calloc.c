#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc and
 * initializes it to 0.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails or if nmemb or size is 0, the function returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
	free(ptr);
}
