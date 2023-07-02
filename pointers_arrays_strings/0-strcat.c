#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to be concatenated.
 * @src: The source string to be appended to the destination.
 *
 * Description: This function appends the contents of the source string to
 *              the end of the destination string.
 *
 * Return: A pointer to the destination string.
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
