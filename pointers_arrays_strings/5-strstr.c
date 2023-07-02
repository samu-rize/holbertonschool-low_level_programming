#include "main.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring.
 * @s: array of chars
 * @a: array of chars
 * Return: Always 0.
 */

char *_strstr(char *s, char *a)
{
	unsigned short int i, j;

	if (*a == '\0')
	{
		return (s);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[0])
		{
			for (j = 0; a[j] == s[i + j]; j++)
			{
				if (a[j + 1] == '\0')
				{
					return (&s[i]);
				}
			}
		}
	}
	return (NULL);
}
