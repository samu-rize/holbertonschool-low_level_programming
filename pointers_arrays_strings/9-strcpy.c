#include "main.h"
/**
 * _strcpy - Prints a string in reverse
 * @dest: The input string
 * @src: The input string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
