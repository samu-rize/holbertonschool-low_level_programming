#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: a pointer to the memory area to be filled.
 * @c: char.
 * 
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	unsigned short int i, j;

	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = 0;
			break;
		}
		i++;
	}
	if (j == 0)
	{
		for (; s[i] != '\0'; i++, j++)
		{
			s[j] = s[i];
		}
		for (; j < i; j++)
		{
			s[j] = '\0';
		}
	}
	return (s);
}
