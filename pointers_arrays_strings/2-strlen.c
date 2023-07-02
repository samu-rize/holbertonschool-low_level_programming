#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function calculates the length of the string 's' by
 *              counting the number of characters until the null terminator
 *              is encountered.
 *
 * Return: The length of the string (number of characters).
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
