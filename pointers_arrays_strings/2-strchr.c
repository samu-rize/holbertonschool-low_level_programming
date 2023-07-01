#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to the memory area to be filled.
 * @c: char.
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	unsigned short int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
