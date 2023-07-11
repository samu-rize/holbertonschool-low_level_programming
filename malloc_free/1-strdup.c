#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates an array of characters dynamically with
 * the given size and initializes
 *                each element with the specified character.
 * @str: The size of the array to be created.
 *
 * Return: A pointer to the dynamically allocated array if
 * successful, otherwise NULL.
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		l = strlen(str);
		ptr = (char *)malloc((l + 1) * sizeof(char));
		if (ptr == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < l; i++)
			{
				ptr[i] = str[i];
			}
			ptr[i] = '\0';
			return (ptr);
			free(ptr);
		}
	}
}
