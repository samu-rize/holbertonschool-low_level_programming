#include "main.h"
/**
 * _strcpy - Prints a string in reverse
 * @dest: The input string
 * @src: The input string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = _strlen (src);
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
