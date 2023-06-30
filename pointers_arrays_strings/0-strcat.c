#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: array of chars
 * @src: array of chars
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
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
	}
	return (dest);
}
