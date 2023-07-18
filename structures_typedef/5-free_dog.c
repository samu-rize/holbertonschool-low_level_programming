#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for a dog structure.
 *
 * Return: None
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
