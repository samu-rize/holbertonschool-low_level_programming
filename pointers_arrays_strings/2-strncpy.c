#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string up to a certain number of characters.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 *
 * Description: This function copies characters from the source string 'src'
 *              to the destination string 'dest' up to a maximum of 'n'
 *              characters. If the length of 'src' is less than 'n', the
 *              remaining characters in 'dest' are filled with null terminators.
 *
 * Return: Pointer to the destination string 'dest'.
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
