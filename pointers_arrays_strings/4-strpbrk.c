#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - concatenates two strings.
 * @s: array of chars
 * @a: array of chars
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *a)
{
	unsigned short int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
