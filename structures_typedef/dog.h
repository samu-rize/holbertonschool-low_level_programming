#ifndef DOG_HF
#define DOG_HF

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a struct dog with the provided name,
 *              age, and owner values.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
