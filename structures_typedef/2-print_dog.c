#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: This function prints the name, age, and owner of the given
 *              struct dog. If any of the fields are NULL, it prints "(nil)".
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d)
		{
			return;
		}

		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
