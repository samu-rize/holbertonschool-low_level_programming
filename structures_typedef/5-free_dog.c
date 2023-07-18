#include "dog.h"

/**
 * new_dog - Creates a new dog with given information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function creates a new dog with the specified name, age,
 *              and owner. It allocates memory for the dog structure and the
 *              copies of the name and owner strings. Returns a pointer to the
 *              newly created dog, or NULL if memory allocation fails.
 * Return: Pointer to the newly created dog, or NULL if memory allocation
 * fails.
 */

void free_dog(dog_t *d);
{
	if (d)
	{
		free(d);
	}
	return;
}
