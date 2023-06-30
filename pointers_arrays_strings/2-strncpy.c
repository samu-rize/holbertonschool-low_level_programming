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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
