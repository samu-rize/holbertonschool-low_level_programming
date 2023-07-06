#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination array to copy the string to.
 * @src: The source array to copy the string from.
 *
 * Description: This function copies the string from the source array to the
 *              destination array. It iterates over each character of the
 *              source array until it reaches the null terminator '\0', and
 *              copies each character to the corresponding position in the
 *              destination array. Finally, it adds the null terminator to the
 *              end of the destination array to ensure it is a valid string.
 *
 * Return: A pointer to the destination array.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
