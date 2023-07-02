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
	unsigned short int i, j, c, n;

	n = 0;
	for (c = 0; a[c] != '\0'; c++)
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] != a[j])
			{
				n = 0;
			}
			else
			{
				n++;
				i++;
				if (n == c)
				{
					return(&s[i - n]);
				}
			}
		}
	}
	return (NULL);
}
