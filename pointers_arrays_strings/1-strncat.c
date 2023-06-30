#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: array of chars
 * @src: array of chars
 * @n: integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
        if (s == n)
        {
            break;
        }
	}
	return (dest);
}
