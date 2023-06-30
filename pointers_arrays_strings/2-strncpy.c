#include "main.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings.
 * @dest: array of chars
 * @src: array of chars
 * @n: integer
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (src[s] != '\0')
	{
		if (s == n)
		{
			break;
		}
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
