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

	j = 0;
	while (src[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
