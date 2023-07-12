#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Creates an array of characters dynamically with
 * the given size and initializes
 *                each element with the specified character.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: A string that contain the first and second strings, otherwise NULL.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, ls1, ls2;

	
	
	if (s1 == NULL)
	{
		s1 = '\0';
	}
    if (s2 == NULL)
	{ 
		s2 = '\0';
	}
		ls1 = strlen(s1);
		ls2 = strlen(s2);
		ptr = (char *)malloc((ls1 + ls2 + 1) * sizeof(char));
		if (ptr == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (ls1 + ls2); i++)
			{
				if (i < ls1)
				{
					ptr[i] = s1[i];
				}
				else
				{
					ptr[i] = s2[i - ls1];
				}
			}
			ptr[i] = '\0';
			return (ptr);
			free(ptr);
		}
	}

