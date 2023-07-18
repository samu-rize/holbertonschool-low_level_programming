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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_n, len_o;
	char *ptr;

	len_n = strlen(name);
	len_o = strlen(owner);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
	{
		return (NULL);
	}

	dog->name = (char *)malloc((len_n * sizeof(char)) + 1);
	if (!dog->name)
	{
		return (NULL);
		free(dog);
	}

	dog->owner = (char *)malloc((len_o * sizeof(char)) + 1);
	if (!dog->owner)
	{
		return (NULL);
		free(dog);
		free(dog->name);
	}

	strcpy(name, dog->name);
	strcpy(owner, dog->owner);
	dog->age = age;

	return (dog);
	free(dog);
	free(dog->name);
	free(dog->owner);
}
