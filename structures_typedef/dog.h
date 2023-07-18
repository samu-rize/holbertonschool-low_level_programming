#ifndef DOG_HF
#define DOG_HF

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - Struct to hold dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This struct is used to store information about dogs.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
