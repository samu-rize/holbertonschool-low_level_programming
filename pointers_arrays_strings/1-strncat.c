#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to a specified number of characters.
 * @dest: Array of characters representing the destination string.
 * @src: Array of characters representing the source string.
 * @n: Maximum number of characters to be concatenated.
 *
 * Description: This function appends the content of the source string to the
 *              destination string, up to the specified number of characters.
 *              The resulting string is null-terminated.
 *
 * Return: A pointer to the resulting string (the destination string).
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
